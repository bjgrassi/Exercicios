#include<stdio.h>
#include<stdlib.h>


const int tam=5;

void t(int *vet, int tam){
	int i, menor=*(vet+i);
	
	
	for( i=0;i<tam;i++){
		if(*(vet+i)<menor)
			menor=*(vet+i);
	}
	
	printf("Menor: %d: ", menor);
}

int main(){
	int vet[tam], i;
	
	for(i=0;i<tam;i++){
	printf("Valor %d: ",i+1);
	scanf("%d", &vet[i]);
	}
	
	t(vet,tam);
	
	system("pause");
	return 0;
}
