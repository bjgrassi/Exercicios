//8- Soma e diferença de valores em posicoes de dois vetores

#include <stdio.h>
#include <iostream>
using namespace std;

int main ()
{
	const int QTD=5;
	int vetor [QTD], vetor2 [QTD], i, cont=0;
	
	printf ("Vetor 1: \n");
	for (i=0;i<QTD;i++){
	  	printf ("Digite um numero inteiro: \n");
	  	cin>>vetor[i];
	}
	
	printf ("Vetor 2: \n");
	for (i=0;i<QTD;i++){
		
	   	printf ("Digite um numero inteiro: \n");
	  	cin>>vetor2[i];
	  	}
	  	
	for (i=0;i<QTD;i++){
	   	printf ("\nSoma dos elementos da coluna %d : %d\n",i+1, (vetor[i]+vetor2[i]));
	   	printf ("Diferenca dos elementos da coluna %d : %d\n",i+1, (vetor[i]-vetor2[i]));
	  	}
	  	
	 return 0;
}
