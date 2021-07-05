%{ 
#include<stdio.h> 
#include<stdlib.h> 
int yylex();
int yyerror();
%} 
%token ZERO ONE 
%% 
N: L { printf("%d\n", $$);} 
L: L B {$$=$1*2+$2;} | B 
B: ZERO  | ONE ; 
%% 
int main() { 
printf("Enter the binary number\n"); 
/*
L: L B {$$=$1*2+$2;printf("%d is $1\n%d is $2\n%d is $$\n",$1,$2,$$);} | B 
for better debugging
*/
yyparse(); 
} 
int yyerror(char *s) { fprintf(stdout, "incorrect input\n"); } 