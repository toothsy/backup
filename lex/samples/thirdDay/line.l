%{
int count=0;
%}

%%
.*\n  {count++;fprintf(yyout, "%4d\t %s", count, yytext);}
%%
void main(int argCount, char ** args){
	printf("enter the file name and ctrl+d for output\n");

	yyin = fopen(args[1],"r");
	yyout = fopen(args[2],"w");
	
	yylex();
	fclose(yyin);
	fclose(yyout);
	printf("lines are %d", count);
}
