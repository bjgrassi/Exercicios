//4- Um vetor que soma automaticamente o numero anterior + 2 

#include <stdio.h>

int main ()
{
	const int QTD=10;
	int vetor [QTD], i, num=1;
	
	for (i=0;i<QTD;i++){
	  	vetor[i]=num;
	  	num = num+2;
	}
	for (i=0;i<QTD;i++){
	  	printf ("%d ", vetor[i]);
	}
	return 0;
}
