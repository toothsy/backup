%{
#include <stdio.h>
int count=0;
%}
%s COM
%%
"/*" {BEGIN(COM);}
<COM>"*/" { count++;BEGIN(0);}
<COM>. {;}
"//".* {count++;}
.|\n  {fprintf(yyout,"%s",yytext);}
%%
void main(){
	yyin = fopen("in.c","r");
	yyout = fopen("out.c","w");	yylex();
	printf("the comments in the  file are %d \n",count);
	fclose(yyin);
	fclose(yyout);
}