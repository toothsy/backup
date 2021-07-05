%{
		#include "y.tab.h"
%}
%%
"(" {valid++;}
")" {valid--; if(valid<0)fail();}
"+"|"*" {strcpy(operators[noOfOperators],yytext);noOfOperators++;}
[0-9]+ {strcpy(operands[noOfOperands],yytext);noOfOperands++;}
[^+*]"("[^0-9] {fail();}
[+*]")" {fail();}
%%