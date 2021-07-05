%{ 
#include<stdio.h> 
#include<stdlib.h> 
int yylex();
int yyerror();
%} 


%token LETTER DIGIT

%%
variable: LETTER | variable LETTER	| variable DIGIT
;
%%
void main(){
	printf("Enter the varible\n");
	yyparse();
	printf("correct identifier\n");
}

int yyerror(){
	printf("WRONG indentifier\n");
	exit(0);
}