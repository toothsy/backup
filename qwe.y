%{
	#include<stdio.h>
	#include<stdlib.h>
%}

%token A B

%%
s:A B|A A B|A A A B|A A A A B;
%%

void main(){
	printf("Enter \n");
	yyparse();
	printf("Valid String\n");
}

int yyerror(){
	printf("Invalid string \n");
	exit(0);
}
