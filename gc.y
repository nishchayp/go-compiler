%{
#include<stdio.h>
#include<stdlib.h>
int yylex();
int yyerror();
extern FILE *yyin;
%}

%define parse.error verbose
%locations 
%define api.pure
%token 

BREAK DEFAULT FUNC INTERFACE SELECT CASE DEFER GO 
MAP STRUCT CHAN ELSE GOTO PACKAGE SWITCH CONST 
FALLTHROUGH IF RANGE TYPE CONTINUE FOR IMPORT RETURN VAR 

SC COL COM DOTS DOT LRB RRB LSB RSB LCB RCB

EQ ASSIGN STAR PIPE AND
INC DEC LOG_AND LOG_OR
REL_OP PAR_ADD_OP PAR_MUL_OP PAR_UNARY_OP

INT_LIT FLOAT_LIT IMAGINARY_LIT RUNE_LIT STRING_LIT

IDENTIFIER

%%
/**********************Source File**************************/
SourceFile: PackageClause SC ImportDecl SC TopLevelDecl SC
	;
/***********************************************************/



/****************Package & Import Statements****************/
PackageClause: PACKAGE PackageName
	;
PackageName: IDENTIFIER
	| STRING_LIT
	;
ImportDecl: ImportDecl IMPORT PackageName
	|
	;
/***********************************************************/



/*************************Blocks****************************/
Block: LCB StatementList RCB
	;
StatementList: StatementList Statement SC
	|
	;
/***********************************************************/



/*************************Types*****************************/
Type: TypeName 
	| TypeLit 
	| LRB Type RRB 
	;
TypeName: IDENTIFIER 
	;
TypeLit: ArrayType 
	| PointerType 
	| FunctionType
	;
ArrayType: LSB ArrayLength RSB ElementType
	;
ArrayLength: Expression 
	;
ElementType: Type 
	;
PointerType: STAR BaseType
	; 
BaseType: Type
	;
FunctionType: FUNC Signature 
	;
Signature: Parameters Result
	| Parameters
	;
Result: Parameters 
	| Type 
	;
Parameters: LRB ParameterList RRB
	| LRB RRB
	;
ParameterList: ParameterList COM ParameterDecl
	| ParameterDecl
	;
ParameterDecl: IdentifierList DOTS Type
	| IdentifierList Type
	| DOTS Type
	| Type
	;
/***********************************************************/



/*****************Variable Declarations*********************/
VarDecl: VAR VarSpec
	| VAR LRB VarSpec SC RepeatVarSpec RRB
	;
RepeatVarSpec: RepeatVarSpec VarSpec SC
	|
	;
VarSpec: IdentifierList Type EQ ExpressionList
	| IdentifierList Type
	| IdentifierList EQ ExpressionList
	;
/***********************************************************/



/***********************Constants***************************/
// ConstDecl = "const" ( ConstSpec | "(" { ConstSpec ";" } ")" ) .
ConstDecl: CONST ConstSpec
	| CONST LRB ConstSpec SC RepeatConstSpec RRB
	;
RepeatConstSpec: RepeatConstSpec ConstSpec SC
	|
	;
// ConstSpec = IdentifierList [ [ Type ] "=" ExpressionList ] .
ConstSpec: IdentifierList Type EQ ExpressionList
	| IdentifierList EQ ExpressionList
	| IdentifierList
	;
IdentifierList: IdentifierList COM IDENTIFIER
	| IDENTIFIER
	;
ExpressionList: ExpressionList COM Expression
	| Expression
	;
/***********************************************************/



/*****************Declarations and Scope********************/
Declaration: ConstDecl
	| VarDecl
	;
TopLevelDecl: TopLevelDecl Declaration
	| TopLevelDecl FuncDecl
	|
	;
/***********************************************************/



/****************Short Variable Declarations****************/
ShortVarDecl: IdentifierList ASSIGN ExpressionList
	;
/***********************************************************/



/*******************Function Declarations*******************/
FuncDecl: FUNC FunctionName Signature FunctionBody
	;
FunctionName: IDENTIFIER
	;
FunctionBody: Block
	|
	;
/***********************************************************/



/**********************Oprators*****************************/
Expression: UnaryExpr
	| Expression binary_op Expression
	;
UnaryExpr: PrimaryExpr 
	| unary_op UnaryExpr
	;
binary_op: LOG_OR 
	| LOG_AND 
	| REL_OP 
	| add_op 
	| mul_op
	;
add_op: PAR_ADD_OP
	| PIPE
	;
mul_op: PAR_MUL_OP
	| STAR
	| AND
	;
unary_op: PAR_UNARY_OP
	| PAR_ADD_OP
	| STAR
	| AND
	;

PrimaryExpr: Operand
	| Selector
	| PrimaryExpr Selector
	| PrimaryExpr Index
	| PrimaryExpr TypeAsertion
	| PrimaryExpr Arguments
	;
Selector: DOT IDENTIFIER
	;
Index: LSB Expression RSB
	;
TypeAsertion: DOT LRB Type RRB
// Arguments = "(" [ ( ExpressionList | Type [ "," ExpressionList ] ) [ "..." ] [ "," ] ] ")" .
Arguments: LRB ExpressionList DOTS COM RRB
	| LRB ExpressionList DOTS RRB
	| LRB ExpressionList COM RRB
	| LRB ExpressionList RRB
	| LRB Type OptionArguments DOTS COM RRB
	| LRB Type OptionArguments DOTS RRB
	| LRB Type OptionArguments COM RRB
	| LRB Type OptionArguments RRB
	| LRB RRB
	;
OptionArguments: COM Expression
	|
	;
/***********************************************************/



/**********************Oprands******************************/
Operand: Literal 
	| OperandName 
	| LRB Expression RRB
	;
Literal: BasicLit
	;
BasicLit: INT_LIT 
	| FLOAT_LIT
	| IMAGINARY_LIT 
	| RUNE_LIT 
	| STRING_LIT
	;
OperandName: IDENTIFIER
	;

/***********************************************************/



/************************Statements*************************/
// Statement = Declaration | LabeledStmt | SimpleStmt |
// GoStmt | ReturnStmt | BreakStmt | ContinueStmt | GotoStmt |
// FallthroughStmt | Block | IfStmt | SwitchStmt | SelectStmt | ForStmt |
// DeferStmt .
Statement: Declaration 
	| LabeledStmt
	| SimpleStmt
	| GoStmt
	| ReturnStmt
	| BreakStmt
	| ContinueStmt
	| GotoStmt
	| FallthroughStmt
	| Block
	| IfStmt
	| SwitchStmt
	| ForStmt
	| DeferStmt
	;
// SimpleStmt = EmptyStmt | ExpressionStmt | IncDecStmt | Assignment | ShortVarDecl .
SimpleStmt: EmptyStmt 
	| ExpressionStmt 
	| IncDecStmt 
	| Assignment 
	| ShortVarDecl
	;
// LabeledStmt = Label ":" Statement .
LabeledStmt: Label COL Statement
	;
// Label = identifier .
Label: IDENTIFIER
	;
// GoStmt = "go" Expression .
GoStmt: GO Expression
	;
// ReturnStmt = "return" [ ExpressionList ] .
ReturnStmt: RETURN ExpressionList
	| RETURN
	;
// BreakStmt = "break" [ Label ] .
BreakStmt: BREAK Label
	| BREAK
	;
// ContinueStmt = "continue" [ Label ] .
ContinueStmt: CONTINUE Label
	| CONTINUE
	;
// GotoStmt = "goto" Label .
GotoStmt: GOTO Label
	;
FallthroughStmt: FALLTHROUGH
	;
// IfStmt = "if" [ SimpleStmt ";" ] Expression Block [ "else" ( IfStmt | Block ) ] .
IfStmt: IF SimpleStmt SC Expression Block ELSE IfStmt
	| IF SimpleStmt SC Expression Block ELSE Block
	| IF SimpleStmt SC Expression Block
	| IF Expression Block ELSE IfStmt
	| IF Expression Block ELSE Block
	| IF Expression Block
	;
// SwitchStmt = ExprSwitchStmt | TypeSwitchStmt .
SwitchStmt: ExprSwitchStmt 
	| TypeSwitchStmt
	;
// ExprSwitchStmt = "switch" [ SimpleStmt ";" ] [ Expression ] "{" { ExprCaseClause } "}" .
ExprSwitchStmt: SWITCH SimpleStmt SC Expression LCB ExprCaseClause RCB
	| SWITCH SimpleStmt SC LCB ExprCaseClause RCB
	| SWITCH Expression LCB ExprCaseClause RCB
	| SWITCH LCB ExprCaseClause RCB
	;
// ExprCaseClause = ExprSwitchCase ":" StatementList .
ExprCaseClause: ExprCaseClause ExprSwitchCase COL StatementList
	|
	;
// ExprSwitchCase = "case" ExpressionList | "default" .
ExprSwitchCase: CASE ExpressionList 
	| DEFAULT
	;
// TypeSwitchStmt = "switch" [ SimpleStmt ";" ] TypeSwitchGuard "{" { TypeCaseClause } "}" .
TypeSwitchStmt: SWITCH SimpleStmt SC TypeSwitchGuard LCB TypeCaseClause RCB
	| SWITCH TypeSwitchGuard LCB TypeCaseClause RCB
	;
// TypeSwitchGuard = [ identifier ":=" ] PrimaryExpr "." "(" "type" ")" .
TypeSwitchGuard: IDENTIFIER ASSIGN PrimaryExpr DOT LRB TYPE RRB
	| PrimaryExpr DOT LRB TYPE RRB
	;
// TypeCaseClause = TypeSwitchCase ":" StatementList .
TypeCaseClause: TypeCaseClause TypeSwitchCase COL StatementList
	|
	;
// TypeSwitchCase = "case" TypeList | "default" .
TypeSwitchCase: CASE TypeList 
	| DEFAULT
// TypeList = Type { "," Type } .
TypeList: TypeList COM Type
	| Type
	;
// ForStmt = "for" [ Condition | ForClause | RangeClause ] Block .
ForStmt: FOR Condition Block
	| FOR ForClause Block
	| FOR RangeClause Block
	| FOR Block
	;
// Condition = Expression .
Condition: Expression
	|
	;
// ForClause = [ InitStmt ] ";" [ Condition ] ";" [ PostStmt ] .
ForClause: InitStmt SC Condition SC PostStmt
// InitStmt = SimpleStmt .
InitStmt: SimpleStmt
	|
	;
// PostStmt = SimpleStmt .
PostStmt: SimpleStmt
	|
	;
// RangeClause = [ ExpressionList "=" | IdentifierList ":=" ] "range" Expression .
RangeClause: ExpressionList EQ RANGE Expression
	| IdentifierList ASSIGN RANGE Expression
	| RANGE Expression
	;
// DeferStmt = "defer" Expression .
DeferStmt: DEFER Expression
	;
// EmptyStmt = .
EmptyStmt:
	;
// ExpressionStmt = Expression .
ExpressionStmt: Expression
	;
// IncDecStmt = Expression ( "++" | "--" ) .
IncDecStmt: Expression INC
	| Expression DEC
	;
// Assignment = ExpressionList assign_op ExpressionList .
Assignment: ExpressionList assign_op ExpressionList
	;
// assign_op = [ add_op | mul_op ] "=" .
assign_op: add_op EQ
	| mul_op EQ
	| EQ
	;
/***********************************************************/


/************************Stubs*************************/
// ConstDecl: IDENTIFIER
// 	;
// VarDecl: VAR IdentifierList
	// ;
// PrimaryExpr: PrimaryExpr DOT IDENTIFIER
	// ;
// Signature: LRB RRB
	// ;
// Expression : IDENTIFIER
	// ;
// ExpressionList : IOTA
// 	;
// IdentifierList : IOTA
// 	;
// Statement : RETURN IDENTIFIER
// 	;
// BasicLit: INT_LIT 
// 	;
/***********************************************************/
%%

// int yyerror(char const *msg) {
// 	printf("\nError: %d %s\n", yylineno, msg);
// 	return 1;
// }

void main (int argc, char const *argv[]) {
	yyin=fopen(argv[1], "r");

	do {
		if(yyparse()) {
			printf("failure\n");
			exit(0);
		}
	} while (!feof(yyin));
	printf("\nSuccess\n");
}
