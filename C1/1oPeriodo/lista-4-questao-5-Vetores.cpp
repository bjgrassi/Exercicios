//5- Procurar um numero do vetor e verificar quantas vezes aparece

#include <iostream> //cout cin, printf scanf
using namespace std; //cout cin

int main ()
{
	const int QTD=50;
	int vetor [QTD], i, x, cont=0;
	
	for (i=0;i<QTD;i++){
	  	printf ("Digite um numero inteiro: \n");
	  	cin>>vetor[i];
	}
	
	printf ("\nDigite o numero que deseja procurar: \n");
	scanf ("%d", &x);
	for (i=0;i<QTD;i++){
	  	if (vetor[i]== x)
	  		cont++;
	  	}
	printf("\nO numero %d aparece %d vez(es): ",x,cont);  	
	 return 0;
}
