%{ 
#include<stdio.h> 
#include<stdlib.h>
int valid=1; int res=0;
int yyerror();
int yylex();
int yyparse();
%} 
%token NUM 
%left '+' '-' 
%left '*' '/'  
%% 
S: expr{
	if(valid) { res= $$;} 
         } 
expr: expr '+' expr { $$=$1+$3;} 
        | expr '-' expr { $$=$1-$3;} 
        | expr '*' expr { $$=$1*$3;} 
        | expr '/' expr { if($3==0) { 
		   						valid=0;
								printf("Divide by zero error\n");
								exit(0);
								 } 
							else $$=$1/$3;
						} 
    		| '(' expr')'  { $$=$2;} 
    		|  NUM {$$=$1;} 
    ; 
%% 
void main() { 
	printf("Enter an Arithmetic Expression:\n"); 
	yyparse(); 
	if(valid) {
		printf("Expression is valid\n"); printf("Result=%d\n",res); }
} 

int yyerror() { 
	printf("Invalid Expression\n"); 
	exit(0); 
}	  

 