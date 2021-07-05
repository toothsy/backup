%{
#include <stdio.h>
%}

%%
[a-zA-Z] printf("[a-zA-Z] was applied\n");
%%
void main(){
printf("enter some text\n");
yylex();
}
