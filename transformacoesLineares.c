
/*
 * Trabalho referente a 3° unidade de Álgebra Linear 
 * Docente: Profa. Ma. Angélica de Freitas
 * Título: Transformações Lineares em linguegem C
 * Discente: Ed Carlos Pessoa da Silva
 * 
 */ 
 
#include <stdio.h>

int main()
{
int i, j, w = 0,y =0;
int matrizA[2][2];
int vetor1[2],vetor2[2],vetor3[2],vetor4[2],vetor5[2],vetor6[2];
int Tu1a, Tu1b, Tu2a, Tu2b, Tu3a, Tu3b, Tu4a, Tu4b, Tu5a, Tu5b,  Tu6a, Tu6b;

printf("Este algoritmo executa transformações lineares no formato de T[u] = A(u).(x)");


printf("\n\nDigite a matriz conforme o modelo\n");

printf("\n\t[a]\t[b]\n \n\t[c]\t[d]\n\n"); //mostra o exemplo de matriz a ser usado

	for(i=0; i<2; i++)
		for(j=0; j<2; j++) 
	{
	printf("Digite os valores da matriz A - %c: ", ('a' + w++)); //entrada das infos da matriz  
	scanf("%i", &matrizA[i][j]);
	}
  
	printf("\n\t[%i]\t[%i]\n", matrizA[0][0], matrizA[0][1]);  //imprimindo a matriz de entrada
	printf("\n\t[%i]\t[%i]\n", matrizA[1][0], matrizA[1][1]); 
	
				for(int z=0; z <2 ; z++)
				{
					printf("\nEntre com a matriz U1 - %c: ",('a' + y++)); //entrada das infos da matriz  
					scanf("%d", &vetor1[z]);
				}
	
				for(int z=0; z <2 ; z++)
				{
					printf("\nEntre com a matriz U2 - %c: ",('a' + y++)); //entrada das infos da matriz  
					scanf("%d", &vetor2[z]);
				}
				
								for(int z=0; z <2 ; z++)
				{
					printf("\nEntre com a matriz U3 - %c: ",('a' + y++)); //entrada das infos da matriz  
					scanf("%d", &vetor3[z]);
				}
	
				for(int z=0; z <2 ; z++)
				{
					printf("\nEntre com a matriz U4 - %c: ",('a' + y++)); //entrada das infos da matriz  
					scanf("%d", &vetor4[z]);
				}
				
								for(int z=0; z <2 ; z++)
				{
					printf("\nEntre com a matriz U5 - %c: ",('a' + y++)); //entrada das infos da matriz  
					scanf("%d", &vetor5[z]);
				}
	
				for(int z=0; z <2 ; z++)
				{
					printf("\nEntre com a matriz U6 - %c: ",('a' + y++)); //entrada das infos da matriz  
					scanf("%d", &vetor6[z]);
				}
					
				printf("\n Confira os valores de U* \n\n");
				
				printf("U1 = (%i) , (%i)\n", vetor1[0], vetor1[1]);
				printf("U2 = (%i) , (%i)\n", vetor2[0], vetor2[1]);
				printf("U3 = (%i) , (%i)\n", vetor3[0], vetor3[1]);
				printf("U4 = (%i) , (%i)\n", vetor4[0], vetor4[1]);
				printf("U5 = (%i) , (%i)\n", vetor5[0], vetor5[1]);
				printf("U6 = (%i) , (%i)\n", vetor6[0], vetor6[1]);
				
	printf("\n\nOs calculos são:\n\n");
	

Tu1a = (matrizA[0][0] * vetor1[0]) + (matrizA[0][1] * vetor1[1]); //termo 1
Tu1b = (matrizA[1][0] * vetor1[0]) + (matrizA[1][1] * vetor1[1]); //termo 2

printf("\nTermo Tu1a %i * %i +  %i * %i\n", matrizA[0][0], vetor1[0], matrizA[0][1], vetor1[1]);
printf("\nTermo Tu1b %i * %i +  %i * %i\n", matrizA[1][0], vetor1[0], matrizA[1][1], vetor1[1]);

printf("\n\nResultado T[u1]: \n\n");
 
printf("\t[%i]\n\t[%i]", Tu1a, Tu1b);

printf("\n\n");


Tu2a = (matrizA[0][0] * vetor2[0]) + (matrizA[0][1] * vetor2[1]); //termo 1
Tu2b = (matrizA[1][0] * vetor2[0]) + (matrizA[1][1] * vetor2[1]); //termo 2


printf("\nTermo Tu2a %i * %i +  %i * %i\n", matrizA[0][0], vetor2[0], matrizA[0][1], vetor2[1]);
printf("\nTermo Tu2b %i * %i +  %i * %i\n", matrizA[1][0], vetor2[0], matrizA[1][1], vetor2[1]);

printf("\n\nResultado T[u2]: \n\n");
 
printf("\t[%i]\n\t[%i]", Tu2a, Tu2b);

printf("\n\n");


Tu3a = (matrizA[0][0] * vetor3[0]) + (matrizA[0][1] * vetor3[1]); //termo 1
Tu3b = (matrizA[1][0] * vetor3[0]) + (matrizA[1][1] * vetor3[1]); //termo 2


printf("\nTermo Tu3a %i * %i +  %i * %i\n", matrizA[0][0], vetor3[0], matrizA[0][1], vetor3[1]);
printf("\nTermo Tu3b %i * %i +  %i * %i\n", matrizA[1][0], vetor3[0], matrizA[1][1], vetor3[1]);

printf("\n\nResultado T[u3]: \n\n");
 
printf("\t[%i]\n\t[%i]", Tu3a, Tu3b);

printf("\n\n");



Tu4a = (matrizA[0][0] * vetor4[0]) + (matrizA[0][1] * vetor4[1]); //termo 1
Tu4b = (matrizA[1][0] * vetor4[0]) + (matrizA[1][1] * vetor4[1]); //termo 2


printf("\nTermo Tu4a %i * %i +  %i * %i\n", matrizA[0][0], vetor4[0], matrizA[0][1], vetor4[1]);
printf("\nTermo Tu4b %i * %i +  %i * %i\n", matrizA[1][0], vetor4[0], matrizA[1][1], vetor4[1]);

printf("\n\nResultado T[u4]: \n\n");
 
printf("\t[%i]\n\t[%i]", Tu4a, Tu4b);

printf("\n\n");




Tu5a = (matrizA[0][0] * vetor5[0]) + (matrizA[0][1] * vetor5[1]); //termo 1
Tu5b = (matrizA[1][0] * vetor5[0]) + (matrizA[1][1] * vetor5[1]); //termo 2


printf("\nTermo Tu5a %i * %i +  %i * %i\n", matrizA[0][0], vetor5[0], matrizA[0][1], vetor5[1]);
printf("\nTermo Tu5b %i * %i +  %i * %i\n", matrizA[1][0], vetor5[0], matrizA[1][1], vetor5[1]);

printf("\n\nResultado T[u5]: \n\n");
 
printf("\t[%i]\n\t[%i]", Tu5a, Tu5b);

printf("\n\n");




Tu6a = (matrizA[0][0] * vetor6[0]) + (matrizA[0][1] * vetor6[1]); //termo 1
Tu6b = (matrizA[1][0] * vetor6[0]) + (matrizA[1][1] * vetor6[1]); //termo 2


printf("\nTermo Tu6a %i * %i +  %i * %i\n", matrizA[0][0], vetor6[0], matrizA[0][1], vetor6[1]);
printf("\nTermo Tu6b %i * %i +  %i * %i\n", matrizA[1][0], vetor6[0], matrizA[1][1], vetor6[1]);

printf("\n\nResultado T[u6]: \n\n");
 
printf("\t[%i]\n\t[%i]", Tu6a, Tu6b);

printf("\n\n");
}
