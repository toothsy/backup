lower [a-z]
upper [A-Z]

%%
{upper} {printf("%c",yytext[0]+32);}
{lower} {printf("%c",yytext[0]-32);}
%%
void main(){
  printf("\nthis program  converts upper to lowerCase and vice-versa\nand dont forget to ctrl+D\n");
  yyin = fopen("ul.txt","r");
  yylex();
  fclose(yyin);
  }
