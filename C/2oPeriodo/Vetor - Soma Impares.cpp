#include<stdio.h>
#include<stdlib.h>

#define tam 5
int main ()
{ int vet[5], soma=0;
  int i;
  
    for(i=0; i<5; i++){
	    printf("Escreva o %do numero: ", i+1);
	    scanf("%d", &vet[i]);
    }
    
    for(i=0; i<5; i++)
    { if(vet[i]%2==1)
      soma+=vet[i];
    }
      
      printf("\nSoma numeros impares: %d\n\n", soma);
      
	for(i=0; i<5; i++){
	  if(vet[i]>0)
	  	printf("Vetor[%d]: %d\n", i, vet[i]);
	}
      
    
    
system("PAUSE");
return 0;
}

