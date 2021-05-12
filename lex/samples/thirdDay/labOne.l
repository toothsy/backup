%{
#include <stdio.h>
#include<string.h>
void fail();
int noOfOperands = 0;
int noOfOperators = 0;
char  operands[10][10];
char operators[10][10];
int valid = 0;
%}

%%

"(" valid++;
")" valid--; {if(valid<0)fail();}
"+"|"*" {strcpy(operators[noOfOperators],yytext);noOfOperators++;}
[0-9]+ {strcpy(operands[noOfOperands],yytext);noOfOperands++;}
[^+*]"("[^0-9] fail();
[^+*]")" fail();
%%
int  main(){
	int i=0;
	printf("enter an mathematical expression and press ctrl+d for output\n");
	yylex();
	printf("operators=%d\noperands=%d\n",noOfOperators,noOfOperands);
	if(valid==0 && noOfOperands-noOfOperators==1){
		printf("expression is valid \n");
		printf("operands are - \n");
		
		for(i=0;i<noOfOperands;i++)printf("%s\n",operands[i]);
		printf("operators are - \n");
		for(i=0;i<noOfOperators;i++)printf("%s\n",operators[i]);
	}
	else{
		printf("invalid expression \n");
	}
	return 0;
}

void fail(){
	printf("invalid expression \n");
	exit(0);
}