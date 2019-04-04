%{
#include "gc.tab.h"
#include "symbol_table.h"
int yycolumn = 1;
#define YY_USER_ACTION yycolumn += yyleng;
FILE *fp_out;


%}
%option yylineno
decimal_digit [0-9]
exponent [eE][+-]?{decimal_digit}+

%%

"//".*"\n" {
	fprintf(fp_out, "%s", yytext);
}

"\n" {
	fprintf(fp_out, "%s", yytext);
	yycolumn = 1;
}

"break" {
	fprintf(fp_out, "%s", yytext);
	return BREAK;
}

"default" {
	fprintf(fp_out, "%s", yytext);
	return DEFAULT;
}

"func" {
	fprintf(fp_out, "%s", yytext);
	is_func = 1;
	return FUNC;
}

"interface" {
	fprintf(fp_out, "%s", yytext);
	return INTERFACE;
}

"select" {
	fprintf(fp_out, "%s", yytext);
	return SELECT;
}

"case" {
	fprintf(fp_out, "%s", yytext);
	return CASE;
}

"defer" {
	fprintf(fp_out, "%s", yytext);
	return DEFER;
}

"go" {
	fprintf(fp_out, "%s", yytext);
	return GO;
}

"map" {
	fprintf(fp_out, "%s", yytext);
	return MAP;
}

"struct" {
	fprintf(fp_out, "%s", yytext);
	return STRUCT;
}

"chan" {
	fprintf(fp_out, "%s", yytext);
	return CHAN;
}

"else" {
	fprintf(fp_out, "%s", yytext);
	return ELSE;
}

"goto" {
	fprintf(fp_out, "%s", yytext);
	return GOTO;
}

"package" {
	fprintf(fp_out, "%s", yytext);
	return PACKAGE;
}

"switch" {
	fprintf(fp_out, "%s", yytext);
	return SWITCH;
}

"const" {
	fprintf(fp_out, "%s", yytext);
	return CONST;
}

"fallthrough" {
	fprintf(fp_out, "%s", yytext);
	return FALLTHROUGH;
}

"if" {
	fprintf(fp_out, "%s", yytext);
	return IF;
}

"range" {
	fprintf(fp_out, "%s", yytext);
	return RANGE;
}

"type" {
	fprintf(fp_out, "%s", yytext);
	return TYPE;
}

"continue" {
	fprintf(fp_out, "%s", yytext);
	return CONTINUE;
}

"for" {
	fprintf(fp_out, "%s", yytext);
	return FOR;
}

"import" {
	fprintf(fp_out, "%s", yytext);
	return IMPORT;
}

"return" {
	fprintf(fp_out, "%s", yytext);
	return RETURN;
}

"var" {
	fprintf(fp_out, "%s", yytext);
	return VAR;
}

";" {
	fprintf(fp_out, "%s", yytext);
	return SC;
}

":" {
	fprintf(fp_out, "%s", yytext);
	return COL;
}

"," {
	fprintf(fp_out, "%s", yytext);
	return COM;
}

"..." {
	fprintf(fp_out, "%s", yytext);
	return DOTS;
}

"." {
	fprintf(fp_out, "%s", yytext);
	return DOT;
}

"(" {
	fprintf(fp_out, "%s", yytext);
	return LRB;
}

")" {
	fprintf(fp_out, "%s", yytext);
	return RRB;
}

"[" {
	fprintf(fp_out, "%s", yytext);
	return LSB;
}

"]" {
	fprintf(fp_out, "%s", yytext);
	return RSB;
}

"{" {
	fprintf(fp_out, "%s", yytext);
	return LCB;
}

"}" {
	fprintf(fp_out, "%s", yytext);
	return RCB;
}

"=" {
	fprintf(fp_out, "%s", yytext);
	return EQ;
}

":=" {
	fprintf(fp_out, "%s", yytext);
	return ASSIGN;
}


"++" {
	fprintf(fp_out, "%s", yytext);
	return INC;
}

"--" {
	fprintf(fp_out, "%s", yytext);	
	return DEC;
}

"&&" {
	fprintf(fp_out, "%s", yytext);
	return LOG_AND;
}

"||" {
	fprintf(fp_out, "%s", yytext);
	return LOG_OR;
}

"*" {
	fprintf(fp_out, "%s", yytext);
	return STAR;
}

"|" {
	fprintf(fp_out, "%s", yytext);
	return PIPE;
}

"&" {
	fprintf(fp_out, "%s", yytext);
	return AND;
}

"=="|"!="|"<"|"<="|">"|">=" {
	fprintf(fp_out, "%s", yytext);
	return REL_OP;
}

"+"|"-"|"^" {
	fprintf(fp_out, "%s", yytext);
	return PAR_ADD_OP;
}

"/"|"%"|"<<"|">>"|"&^" {
	fprintf(fp_out, "%s", yytext);
	return PAR_MUL_OP;
}

"!"|"<-" {
	fprintf(fp_out, "%s", yytext);
	return PAR_UNARY_OP;
}

[a-zA-Z_][a-zA-Z_0-9]* {
	fprintf(fp_out, "%s", yytext);
	if (is_func == 1) {
		is_func = 0;
		insert(yytext, "FUNC", yylineno, -1, "ipsum", 'L', arr);
	} else {
		insert(yytext, "Identifier", yylineno, -1, "ipsum", 'L', arr);
	}
	return IDENTIFIER;
}

{decimal_digit}+ {
	fprintf(fp_out, "%s", yytext);
	insert(yytext, "Integer Literal", yylineno, -1, "ipsum", 'L', arr);
	return INT_LIT;
}

{decimal_digit}+"."{decimal_digit}*|{decimal_digit}+{exponent}|"."{decimal_digit}+{exponent}? {
	fprintf(fp_out, "%s", yytext);
	insert(yytext, "Float Literal", yylineno, -1, "ipsum", 'L', arr);
	return FLOAT_LIT;
}

({decimal_digit}+|({decimal_digit}+"."{decimal_digit}*|{decimal_digit}+{exponent}|"."{decimal_digit}+{exponent}?))"i" {
	fprintf(fp_out, "%s", yytext);
	insert(yytext, "Imaginary Literal", yylineno, -1, "ipsum", 'L', arr);
	return IMAGINARY_LIT;
}

"'"[a-zA-Z_0-9]"'" {
	fprintf(fp_out, "%s", yytext);
	return RUNE_LIT;
}

"\"".*"\"" {
	fprintf(fp_out, "%s", yytext);
	insert(yytext, "String Literal", yylineno, -1, "ipsum", 'L', arr);
	return STRING_LIT;
}

. {
	fprintf(fp_out, "%s", yytext);
}


%%

int yyerror(char const *msg, YYLTYPE yylloc) {
	printf("\nError on line %d: %d %s\n", yylineno, yycolumn - yyleng, msg);
	return 1;
}

int yywrap() {
	print_sym_tbl();
	return 1;
}
