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

SC COL COM LRB RRB LSB RSB LCB RCB

EQ ASSIGN PLUS MINUS STAR SLASH 
INC DEC LOG_AND LOG_OR
REL_OP ADD_OP MUL_OP UNARY_OP 
E IOTA

LETTER

DECIMAL_DIGIT

%%
stmt: LRB RRB
	| LCB RCB
%%

int yyerror(char *msg)
{
printf("Invalid Expression\n");
return 1;

}
void main ()
{
printf("Enter the declaration stmt:\n");
yyin=fopen("in.txt","r");

do
{
	if(yyparse())
	{
	printf("failure");
	exit(0);
	}
}while(!feof(yyin));
printf("\nSuccess\n");
}