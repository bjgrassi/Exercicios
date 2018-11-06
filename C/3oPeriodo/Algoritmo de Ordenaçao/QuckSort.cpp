#include<stdio.h>
#include<stdlib.h>

int quicksort(int *vet, int esq, int dir){
	int i=esq, j=dir,troca;
	int pivo=[esq+(dir-esq)/2];

	while(i<=j){	
		while(*(vet+i)<pivo){
			i=i+1;
		}
	
		while(*(vet+i)>pivo){
			j=j-1;
		}
	
		
			if(i<j){
				troca=*(vet+esq);
				*(vet+esq)=*(vet+i);
				*(vet+i)=troca;
			}
	}
	return 1;
}
	
int main(){
	int vet[]={3,2,8,4,1,5,6}
	int tam=7;
	
	mostra= quicksort(vet,0,tam);
	
	printf("%d ", mostra);
}
