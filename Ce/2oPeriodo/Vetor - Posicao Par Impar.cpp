#include<stdio.h>
#include<stdlib.h>

#define tam 6
int main ()
{ int a[tam], imp[tam/2], par[tam/2];
  int i, j=0, k=0;
	  
	for(i=0; i<tam; i++) {
	  printf("Elemento A[%d]: ", i);
	  scanf("%d", &a[i]);
	  
	  if(i%2!=0)
	  	imp[k++]=a[i]; //1,3,5
	    else   
	  	par[j++]=a[i]; //0,2,4
	}

  system("cls");
  for(i=0, printf("\nVet A:\n"); i<tam; i++)
  	printf("%5d", a[i]);
  for(i=0, printf("\nVetor posicao Par:\n"); i<tam/2; i++)
  	printf("%5d", par[i]);
  for(i=0, printf("\nVetor posicao Impar:\n"); i<tam/2; i++)
  	printf("%5d", imp[i]);
              
   printf("\n\n");
    
	system("PAUSE");
	return 0;
}
