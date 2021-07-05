%{ 
	#include "y.tab.h" 
	#include <stdlib.h> 
	extern int yylval; 
	extern int valid; 
%} 
%% 
[0-9]+ {	
	yylval=atoi(yytext); 	
	return NUM;
	} 
.  return yytext[0]; 
%%