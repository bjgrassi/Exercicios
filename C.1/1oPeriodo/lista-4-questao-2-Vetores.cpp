//2- Somar dois valores do vetor de acordo com a sua posição

#include <iostream> //cout cin, printf scanf
using namespace std; //cout cin

int main ()
{
	const int QTD=10;
	int vetor [QTD], soma=0, i, a, b;
	
	for (i=0;i<QTD;i++){
	  	printf ("Digite o %d numero inteiro: \n", i+1);
	  	cin>>vetor[i];
	}
	
	 printf ("\n\nDigite a posicao do primeiro numero inteiro que deseja somar \n");
	 scanf ("%d",&a);
	 printf ("Digite a posicao do segundo numero inteiro que deseja somar \n");
	 scanf ("%d",&b);
	 soma = vetor[a] + vetor[b];
	 printf ("A soma desses elementos eh: %d",soma);
	 
	 return 0;
}
