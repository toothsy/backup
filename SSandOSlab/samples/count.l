%{
#include <stdio.h>
int count=0;
%}

%%
[ \n\t] count++;
%%
void main(){
  printf("\nthis program  tells you number of chars\n and dont forget to ctrl+D\n");
  yylex();
  printf("\nnumber of chars are %d\n",count);
}
