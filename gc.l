%{
#include "gc.tab.h"
%}

%%

"break" {
	printf("%s", yytext);
	return BREAK;
}

"default" {
	printf("%s", yytext);
	return DEFAULT;
}

"func" {
	printf("%s", yytext);
	return FUNC;
}

"interface" {
	printf("%s", yytext);
	return INTERFACE;
}

"select" {
	printf("%s", yytext);
	return SELECT;
}

"case" {
	printf("%s", yytext);
	return CASE;
}

"defer" {
	printf("%s", yytext);
	return DEFER;
}

"go" {
	printf("%s", yytext);
	return GO;
}

"map" {
	printf("%s", yytext);
	return MAP;
}

"struct" {
	printf("%s", yytext);
	return STRUCT;
}

"chan" {
	printf("%s", yytext);
	return CHAN;
}

"else" {
	printf("%s", yytext);
	return ELSE;
}

"goto" {
	printf("%s", yytext);
	return GOTO;
}

"package" {
	printf("%s", yytext);
	return PACKAGE;
}

"switch" {
	printf("%s", yytext);
	return SWITCH;
}

"const" {
	printf("%s", yytext);
	return CONST;
}

"fallthrough" {
	printf("%s", yytext);
	return FALLTHROUGH;
}

"if" {
	printf("%s", yytext);
	return IF;
}

"range" {
	printf("%s", yytext);
	return RANGE;
}

"type" {
	printf("%s", yytext);
	return TYPE;
}

"continue" {
	printf("%s", yytext);
	return CONTINUE;
}

"for" {
	printf("%s", yytext);
	return FOR;
}

"import" {
	printf("%s", yytext);
	return IMPORT;
}

"return" {
	printf("%s", yytext);
	return RETURN;
}

"var" {
	printf("%s", yytext);
	return VAR;
}

";" {
	printf("%s", yytext);
	return SC;
}

":" {
	printf("%s", yytext);
	return COL;
}

"," {
	printf("%s", yytext);
	return COM;
}

"(" {
	printf("%s", yytext);
	return LRB;
}

")" {
	printf("%s", yytext);
	return RRB;
}

"[" {
	printf("%s", yytext);
	return LSB;
}

"]" {
	printf("%s", yytext);
	return RSB;
}

"{" {
	printf("%s", yytext);
	return LCB;
}

"}" {
	printf("%s", yytext);
	return RCB;
}

"=" {
	printf("%s", yytext);
	return EQ;
}

":=" {
	printf("%s", yytext);
	return ASSIGN;
}

"+" {
	printf("%s", yytext);
	return PLUS;
}

"-" {
	printf("%s", yytext);
	return MINUS;
}

"*" {
	printf("%s", yytext);
	return STAR;
}

"/" {
	printf("%s", yytext);
	return SLASH;
}

"++" {
	printf("%s", yytext);
	return INC;
}

"--" {
	printf("%s", yytext);
	return DEC;
}

"&&" {
	printf("%s", yytext);
	return LOG_AND;
}

"||" {
	printf("%s", yytext);
	return LOG_OR;
}

"=="|"!="|"<"|"<="|">"|">=" {
	printf("%s", yytext);
	return REL_OP;
}

"+"|"-"|"|"|"^" {
	printf("%s", yytext);
	return ADD_OP;
}

"*"|"/"|"%"|"<<"|">>"|"&"|"&^" {
	printf("%s", yytext);
	return MUL_OP;
}

"+"|"-"|"!"|"^"|"*"|"&"|"<-" {
	printf("%s", yytext);
	return UNARY_OP;
}

"e"|"E" {
	printf("%s", yytext);
	return E;
}

"i" {
	printf("%s", yytext);
	return IOTA;
}

[a-zA-Z_] {
	printf("%s", yytext);
	return LETTER;
}

[0-9] {
	printf("%s", yytext);
	return DECIMAL_DIGIT;
}

%%

int yywrap()
{
	return 1;
}
