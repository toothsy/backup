%{
#include<stdio.h>
#include<stdlib.h>
int yyparse();
int yyerror();
int yylex();
int valid=1,res=0;
%}
%token NUM
%left '+' '-'
%left '*' '/'
%%
S: E {if(valid)res=$$;}
E: E '+' E {$$=$1+$3;}
	| E '-' E {$$=$1-$3;}	 
	| E '*' E {$$=$1*$3;}	 
	| E '/' E {if($3==0){
							valid=0;
							printf("DIVISION BY ZERO ERROR\n");
							exit(0);
							}
				else $$=$1/$3;}	 
	|'(' E ')' {$$=$2;}
	| NUM {$$=$1;}
	;
%%
void main(){
	printf("enter the arithmetic expression\n");
	yyparse();
	if(valid)
	printf("result is %d\n",res);
}
int yyerror(){
	printf("INVALID EXPRESSION\n");
	exit(0);
}