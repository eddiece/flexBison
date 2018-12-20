%{

/********************** 
 * Declaracões em C *
 **********************/


  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>
  #include "string.h"
  extern int yylex(void);
  extern char *yytext;
  extern int linha;
  extern FILE *yyin;
  void yyerror(char *s);
%}

/*************************
  Declarações do Bison *
 *************************/


%union
{
  float real;
  int numero;
  char* texto;
}


%start lista_i;


%token <real> NUMERO
%token PARA
%token PARF
%token VIRG
%token IGUAL
%token MAIOR
%token COLCHA
%token COLCHF
%token PONTOVIRG



%type <texto> simbolo
%type <real> valor



%%
/***********************
 * Regras Gramaticais *
 ***********************/


lista_i : 	lista_i i;
			| i
			;
i:			instrucao PONTOVIRG
			|error PONTOVIRG  /* Recuperação de erro genérico */
			;

instrucao:	simbolo IGUAL MAIOR valor {printf ("   outra vez valor = %1.0f\n",$4);}
				|simbolo IGUAL valor { printf ("Erro Sintático, falta >\n"); }
				|simbolo MAIOR valor { printf ("Erro Sintático, falta = \n");}
				
			;
simbolo:		PARA NUMERO VIRG NUMERO PARF {printf ("  simbolo %1.0f , %1.0f ",$2,$4);};
			| NUMERO VIRG NUMERO PARF {printf ("Erro Sintático, falta (\n");}
			| PARA NUMERO VIRG NUMERO {printf ("Erro Sintático, falta )\n");}
			
			;
			
valor:	COLCHA NUMERO COLCHF {  printf ("  valor = %1.0f\n",$2);
				$$=$2;	
								
							}
		


			;	

%%
/**********************
 * Codigo C Adicional *
 **********************/
void yyerror(char *s)
{
	printf("Erro Sintático %s \n",s);
}


}

int main(int argc,char **argv)
{
	
	if (argc>1)
		yyin=fopen(argv[1],"rt");
	else
		//yyin=stdin;
		yyin=fopen("entrada.txt","rt");
		

	yyparse();

	return 0;
}
