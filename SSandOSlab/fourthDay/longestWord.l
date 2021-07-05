%{
	int count = 0;
	char *s;
%}
%%
[a-zA-Z]* {if(yyleng>count){count=yyleng;s=yytext;}}
[\*\/<>=+,.;{}()#///**/] ;
[ \n\t] ;
%%
void main(){
	yyin = fopen("input.txt","r");
	yylex();
	printf("\nlongest word is %d letters long\n%s\n\n", count,s);
}