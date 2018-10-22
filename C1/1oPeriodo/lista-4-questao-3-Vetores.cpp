//3- Gerar um vetor e depois trocar de posições

#include <iostream> //cout cin, printf scanf
using namespace std; //cout cin

int main ()
{
	const int QTD=8;
	int vetor [QTD], i, aux;
	
	for (i=0;i<QTD;i++){
	  	printf ("Digite o %d numero inteiro: \n", i+1);
	  	cin>>vetor[i];
	}
	printf ("\nVetor original: \n");
	for (i=0;i<QTD;i++){
	  	printf ("%d - ", vetor[i]);
	  	}
	  	
	for (i=0;i<4;i++){
	  	aux=vetor[i];
	  	vetor[i] = vetor[i+4];
	  	vetor[i+4] = aux;
	}
	printf ("\nVetor trocado: \n");
	 for (i=0;i<QTD;i++){
	  	printf ("%d - ", vetor[i]);
	}
	printf ("\n ");
	 return 0;
}
