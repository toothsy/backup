%%
.* fprintf(yyout,"%s",yytext);
%%
void main(){
	yyin = fopen("input.c","r");
	yyout = fopen("copy-3.c","w");
	yylex();
	fclose(yyout);
	fclose(yyin);
}
