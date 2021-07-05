%{
#include <stdio.h>
int count=0;
%}

%%
[a-zA-Z0-9] count++;
%%
void main(){
  printf("\nthis program  tells you number of chars and dont forget to ctrl+D\n");
  yylex();
  printf("\nnumber of chars are %d\n",count);
}
