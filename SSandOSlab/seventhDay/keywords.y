%{ 
#include<stdio.h> 
#include<stdlib.h>
int yyerror();
int yylex();
int yyparse();
int id=0,key=0,op=0; 
%} 
%token ID KEY OP 
%%
inp:ID inp {id++;} | KEY inp {key++;} |OP inp {op++;}
 | ID { id++; }
 | KEY { key++; }
 | OP { op++;}

;
%%
extern FILE *yyin;
void main(int argc,char ** argv){
yyin  = fopen(argv[1],"r");
yyparse();
printf("keywords=%d\noperators=%d\nidentifers=%d\n",key,op,id);
}
int yyerror(){printf("not valid");}