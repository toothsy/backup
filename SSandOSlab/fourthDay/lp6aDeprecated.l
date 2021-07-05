%{
#include <stdio.h>
int commentCount=0;
%}
s "/"
a "*"
singleLineC {s}{s}.*
multiLine {s}{a}+([^*]|\n)*{a}*{a}+{s}
%%
{singleLineC} {commentCount++;}
{multiLine}  {commentCount++;}
.|\n fprintf(yyout,"%s",yytext);
%%
void main(int argCount, char ** args){
	printf("ctrl+d for output\n");
	yyin = fopen("input.c","r");
	yyout = fopen("out.c","w");
	
	yylex();
	printf("comment lines are %d\n", commentCount);
	fclose(yyin);
	fclose(yyout);
}
