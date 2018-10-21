//7- Juntar dois vetores

#include <stdio.h>

int main ()
{
	const int QTD=5;
	int vetor3 [10], vetor [QTD], vetor2 [QTD], i;
	
	printf ("Vetor 1: \n");
	for (i=0;i<QTD;i++){
	  	printf ("Digite um numero inteiro: \n");
	  	scanf("%d", &vetor[i]);
	}
	printf ("Vetor 2: \n");
	for (i=0;i<QTD;i++){
	   	printf ("Digite um numero inteiro: \n");
	  	scanf("%d", &vetor2[i]);
	  	}
	for (i=0;i<QTD;i++){
	   	vetor3[i] = vetor[i];
	   	vetor3[i+QTD]= vetor2[i];
	  	}
	  	
	printf ("\nVetor 1: \n"); 	
	for (i=0;i<QTD;i++){
	   	printf ("%d ",vetor[i]);
	  	}
	printf ("\nVetor 2: \n");
	for (i=0;i<QTD;i++){
	   	printf ("%d ",vetor2[i]);
	  	}
	printf ("\nJuncao dos dois vetores: \n");
	for (i=0;i<10;i++){
	   	printf ("%d ",vetor3[i]);
	  	}
	printf ("\n");
	return 0;
}
