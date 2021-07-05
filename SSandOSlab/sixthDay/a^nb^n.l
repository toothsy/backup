%{
		#include <stdio.h> 
	#include <stdlib.h> 
#include "y.tab.h"
%}
%%
a  return A; 
b return B;
. return yytext[0];
%%