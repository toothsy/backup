%{ 
	#include <stdio.h> 
	#include <string.h>    
	#include <stdlib.h> 
	int yylex();
	int yyerror();
	int c =0; 
	int i; 
	int k =0;        
%} 
%union { 
char* f; 
int v;
} 
%token <f> STR 

%% 
S:STR { 
	k = strlen($1) - 1; 
	for (i = 0; i <= k/2; i++) { 	if ($1[i] == $1[k-i]) { c++;} } 
	if ( c == i) 
		printf("The given string %s is palindrome\n", $1); 
	else 
		printf("The given string %s is not a palindrome\n", $1); 
} 

; 
%% 
int yyerror(char *msg) { 
	fprintf(stderr, "provide characters only not special symbols\n"); 
	exit(1); 
} 
int main(){ 
	printf("enter the palindrome \n");
	yyparse(); 
	return 0; 
} 