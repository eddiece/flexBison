/*****************
 * Declarações *
 ****************/ 

%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "sintatico.tab.h"	
	
	int linha=0;
%}

DIGITO [0-9]
NUMERO {DIGITO}+("."{DIGITO}+)?

%%

 /*********************
  * Regras e Ações *
 **********************/

{NUMERO} {yylval.real=atof(yytext); return(NUMERO);}
"(" 	{return(PARA);}
")" 	{return(PARF);}
"," 	{return(VIRG);}
"=" 	{return(IGUAL);}
">" 	{return(MAIOR);}
"[" 	{return(COLCHA);}
"]" 	{return(COLCHF);}
";" 	{return(PONTOVIRG);}
"\n" 	{linha++;}
[\t\r\f] {}
" "		{}
 
.	{printf("Erro lexico na linha %d",linha);}
%%




