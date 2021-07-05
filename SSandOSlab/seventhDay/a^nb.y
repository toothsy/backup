%{
	#include <stdio.h>
	#include<stdlib.h>
	int YYFAIL();
	int yyparse();
	int yylex();
	int yyerror();
	int aCount=0,n;
%}
%token A B
%%
S : X B {   if (aCount!=n) YYFAIL();}
X : X T | T
T : A { aCount++;} 
;

%%
void main(){	
	printf("Enter the value of n \n");
	scanf("%d",&n);
	printf("Enter the string\n");
	yyparse();
	printf("Valid string\n");

}
int YYFAIL(){printf("Invalid count of 'a'\n");exit(0);}
int yyerror(){printf("Invalid string\n");exit(0);}

