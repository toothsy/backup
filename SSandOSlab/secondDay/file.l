%{
int line = 0;
%}

%%
.*\n {line++;printf("%d is the line Number  and  yytext is\t -   %s  \n",line, yytext);}
%%
void main(){
yyin = fopen("test.txt","r");
yylex();
fclose(yyin);

}
