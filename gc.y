%{
#include<stdio.h>
#include<stdlib.h>
int yylex();
int yyerror();
extern FILE *yyin;
%}


%token 

BREAK DEFAULT FUNC INTERFACE SELECT CASE DEFER GO 
MAP STRUCT CHAN ELSE GOTO PACKAGE SWITCH CONST 
FALLTHROUGH IF RANGE TYPE CONTINUE FOR IMPORT RETURN VAR 

SC COL COM DOTS DOT LRB RRB LSB RSB LCB RCB

EQ ASSIGN PLUS MINUS STAR SLASH 
INC DEC LOG_AND LOG_OR
REL_OP ADD_OP MUL_OP UNARY_OP 

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
// VarDecl: VAR VarSpec
// 	| VAR LRB VarSpec SC RepeatVarSpec RRB
// 	;
// RepeatVarSpec: RepeatVarSpec VarSpec SC
// 	|
// 	;
// VarSpec: IdentifierList Type EQ ExpressionList
// 	| IdentifierList Type
// 	| IdentifierList EQ ExpressionList
// 	;
/***********************************************************/



/***********************Constants***************************/
// ConstDecl = "const" ( ConstSpec | "(" { ConstSpec ";" } ")" ) .
// ConstSpec = IdentifierList [ [ Type ] "=" ExpressionList ] .
IdentifierList: IdentifierList COM IDENTIFIER
	| IDENTIFIER
	;
// ExpressionList: ExpressionList COM Expression
// 	| Expression
// 	;
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
Expression: UNARY_OP
	| Expression binary_op Expression
	;
// UnaryExpr: PrimaryExpr 
// 	| UnaryExpr UNARY_OP
binary_op: LOG_OR 
	| LOG_AND 
	| REL_OP 
	| ADD_OP 
	| MUL_OP
/***********************************************************/



/**********************Oprands******************************/
/***********************************************************/



/************************Statements*************************/
/***********************************************************/


/************************Stubs*************************/
ConstDecl: IDENTIFIER
	;
VarDecl: VAR IdentifierList
	;
// PrimaryExpr: PrimaryExpr DOT IDENTIFIER
	// ;
// Signature: LRB RRB
	// ;
// Expression : IOTA
// 	;
// ExpressionList : IOTA
// 	;
// IdentifierList : IOTA
// 	;
Statement : RETURN IDENTIFIER
	;
/***********************************************************/
%%

int yyerror(char *msg) {
	printf("Invalid Expression\n");
	return 1;
}

void main (int argc, char const *argv[]) {
	yyin=fopen(argv[1], "r");

	do {
		if(yyparse()) {
			printf("failure");
			exit(0);
		}
	} while (!feof(yyin));
	printf("\nSuccess\n");
}
