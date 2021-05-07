%%
[ \t\n] printf("%s",yytext);
%%
main(){
  printf("MATCHING WHITESPACE \nput ctrl+D to get output\n");
  yylex();
}
