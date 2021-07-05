%{
  #include<stdio.h>
  int comcount=0;
%}
%s COMMENT
%%
"/*" {
  BEGIN(COMMENT);}
<COMMENT>"*/" {comcount++;BEGIN INITIAL;}
<COMMENT>. {;}
"//".* {comcount++;}
.|\n {fprintf(yyout, "%s", yytext);}
%%
void main()
{ 
              yyin = fopen("input.c","r");
              yyout = fopen("out.c","w");
              yylex();
              printf("The no. of comment lines are:%d\n", comcount);
              fclose(yyin);
              fclose(yyout);
}