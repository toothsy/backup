%{
	#include<stdio.h>
	#include "y.tab.h"
	#include <stdio.h>
	#include<string.h>
	void fail();
	int noOfOperands = 0;
	int noOfOperators = 0;
	char  operands[10][10];
	char operators[10][10];
	int valid = 0;
%}

%token LETTER DIGIT

%%
variable: LETTER
	| variable LETTER
	| variable DIGIT
;
%%
void main(){
	printf("Enter the varible\n");
	yyparse();
	printf("correct variable\n");
}

int yyerror(){
	printf("WRONG variable\n");
	exit(0);
}

void fail(){
	printf("\ninvalid expression \n");
	exit(0);
}