//6- Descobrir a quantidade de numeros pares no vetor
#include <stdio.h>
#include <iostream>

int main ()
{
	const int QTD=6;
	int vetor [QTD], i, cont=0;
	for (i=0;i<QTD;i++){
	  	printf ("Digite um numero inteiro: \n");
	  	scanf("%d", &vetor[i]);
	}
	
	for (i=0;i<QTD;i++){
	  	if (vetor[i]%2 == 0)
	  		cont++;
	  	}
	printf("\nExistem %d numeros pares no vetor.",cont);  	
	 return 0;
}
