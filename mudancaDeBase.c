
/*
 * Trabalho referente a 3° unidade de Álgebra Linear 
 * Docente: Profa. Ma. Angélica de Freitas
 * Título: Mudança de Base em linguagem C
 * Discente: Ed Carlos Pessoa da Silva
 * 
 */ 
 
#include <stdio.h>
#include <math.h>

int main()
{
int i, j, w = 0;
int matrizA[2][2];
int matrizB[2][2];
int a, b, c, d, k, l, temp = 0, um = 1, y = 0, m1, m2, m3, m4, Va1, Va2, Vb1, Vb2;
float inv = 0, det = 0, ai, bi, ci, di; 

printf("Este algoritmo executa Mudança de Base de um vetor de base A, Va para base B, Vb");

					printf("\n\nDigite a matriz conforme o modelo\n");           //comentar para usar depois

					printf("\n\t[a]\t[b]\n \n\t[c]\t[d]\n\n"); //mostra o exemplo de matriz a ser usado

						for(i=0; i<2; i++)
							for(j=0; j<2; j++) 
					  {
						   printf("Digite os valores da matriz B - %c: ", ('A' + w++)); //entrada das infos da matriz  
						   scanf("%i", &matrizB[i][j]);
					   }
							  
					printf("\n\t[%i]\t[%i]\n", matrizB[0][0], matrizB[0][1]);  //imprimindo a matriz de entrada
					printf("\n\t[%i]\t[%i]\n", matrizB[1][0], matrizB[1][1]);  
					
				printf("\n\n");


printf("\nEncontrando o determinante de B, det B");

det = (matrizB[0][0] * matrizB[1][1]) -  (matrizB[0][1] * matrizB[1][0]);

printf("\n\n\tO det de B é: %f",det);

a = (pow((-1),2) * (matrizB[1][1])); 

b = (pow((-1),1) * (matrizB[1][0])*-1);  

c = (pow((-1),1) * (matrizB[0][1])); 

d = (pow((-1),2) * (matrizB[0][0])); 


printf("\n\nResultados cofatores de B'\n");


printf("\n\t[%i] \t[%i]\n", a, b);
printf("\n\t[%i] \t[%i]\n", c, d);


printf("\n\nResultado da transposta de B'\n\n");

	temp = b;
	b = c;
	c = temp;

printf("\n\t[%i] \t[%i]\n", a, b);
printf("\n\t[%i] \t[%i]\n", c, d);


printf("\n\nResultado da inversa, B-¹\n\n");

inv = (um/det);

printf("%.f / %d = %.2f", det, um, inv);

ai = inv * a;
bi = inv * b;
ci = inv * c;
di = inv * d;

printf("\n\n\t%f\t\%f\n\t%f\t%f", ai, bi, ci, di);



printf("\n\n");

	for(k=0; k<2; k++)
		for(l=0; l<2; l++) 
	{
	printf("Digite os valores da matriz A - %c: ", ('A' + y++)); //entrada das infos da matriz
	scanf("%i", &matrizA[k][l]);
	}
	
  //imprimindo a matriz de entrada A
  
	printf("\n\t[%i]\t[%i]\n", matrizA[0][0], matrizA[0][1]);  
	printf("\n\t[%i]\t[%i]\n", matrizA[1][0], matrizA[1][1]);  

	printf("\n\n");

	printf("\n\nDeteminar M\n\n");                                  

m1 =  (a * matrizA[0][0]) + (b* matrizA[0][1]); m2 =  (a * matrizA[1][0]) + (b * matrizA[1][1]);
m3 =  (c * matrizA[0][0]) + (d* matrizA[0][1]); m4 =  (c * matrizA[1][0] + d * matrizA[1][1]);

//printf("\t%i\t%i\n", a, b); //teste para conferir posição e resultado

//printf("\t%i\t%i\n\n", c, d);

//printf("%i , %i\n" , a, matrizA[0][0]); //ok m1
//printf("%i , %i\n" , b, matrizA[0][1]); //ok m3
//printf("%i , %i\n" , c, matrizA[1][0]); //ok m2
//printf("%i , %i\n" , d, matrizA[1][1]); //ok m4 

	printf("\n\t[%i]\t[%i]\n", m1, m2);
	printf("\n\t[%i]\t[%i]\n", m3, m4);


	printf("\n\nDigite este vetor Va na base B: \n");
	scanf("%i %i", &Va1, &Va2);
	
	printf("\n\t[%i]\n\t[%i]", Va1, Va2);


	printf("\n\n\tVb = M. Va\n");

	Vb1 = m1 * Va1 + m2 * Va2;
	Vb2 = m3 * Va1 + m4 * Va2;
	
	printf("\n\nO resultado de Vb é: ");
	
	printf("\n\n\t[%i]\n\t[%i]", Vb1, Vb2); 
	

}
