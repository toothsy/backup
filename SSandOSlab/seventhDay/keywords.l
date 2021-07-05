%{
#include <stdio.h>
#include<stdlib.h>
#include "y.tab.h"
int yyparse();
int yyerror();
%}
%%
int|char|bool|float|include|void|double|for|while|if|else|do|open|return|printf { printf("keyword is %s\n",yytext);return KEY; }
[+|-|*|/|>|<|=] { printf("operator is %s\n",yytext);return OP; }
[a-zA-Z][_a-zA-Z0-9]* { printf("identifier is %s\n",yytext);return ID; }
. ;
%%