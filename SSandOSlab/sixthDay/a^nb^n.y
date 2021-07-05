%{ 
#include<stdio.h> 
#include<stdlib.h> 
int yylex();
int yyerror();
%} 
%token A B
%%
S: A S B | A B 
;
%%
void main(){
	printf("Enter string according to rule a^nb^n \n");
	yyparse();
	printf("Valid according to the rules\n");
}

int yyerror(){
printf("Invalid according to the rules\n");
exit(0);
}