%{
  int count=0;
  int nonID=0;
%}
alp [a-zA-Z]
nums [0-9]
%%
{alp}({alp}|{nums})* count++;
[^\n\t ]* nonID++;
%%
void main(){
  printf("this one looks for identifiers\ndont forget ctrl+d to get output\n");
  yylex();

  printf("identifiers are %d\nnon ID are %d\n",count,nonID);
}
