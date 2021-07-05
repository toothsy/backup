%{ 
	#include <stdio.h> 
	#include <stdlib.h> 
	#include "y.tab.h" 
%} 
%% 
[a-zA-Z0-9]+ {yylval.f = yytext; return STR;} 
[.*] {return yytext[0];}
%% 