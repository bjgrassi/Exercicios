#include<stdio.h>
#include<stdlib.h>

#define tam 5

void insereVetor(int *vet, char *string) {
    for(int i=0;i<tam;i++)
        vet[i]={NULL};
    
    printf("%s\n", string);
    for(int i=0;i<tam;i++){
        printf("Insira o vetor[%d]: ", i+1); 
		scanf("%d", &vet[i]);
    }
}

void imprime(int *vet) {
    for(int i=0;i<tam;i++)
    	printf("%d - ", *(vet+i));
    printf("\n\n");
}

//MÉTODOS SORT
void bubbleSort(int *vet){
	int i, voltas, troca;
	for(voltas=0; voltas<tam; voltas++){
		for(i=0;i<tam-1;i++){
			if(vet[i]>vet[i+1]){
				troca=vet[i];
				vet[i]=vet[i+1];
				vet[i+1]=troca;
			}
		}
	}
}

void selectionSort(int *vet){
	int rodada, i, troca;
	
	for(rodada=0;rodada<tam-1;rodada++){
		for(i=rodada+1;i<tam;i++){
			if(vet[i]<vet[rodada]){
				troca=vet[i];
				vet[i]=vet[rodada];
				vet[rodada]=troca;
			}
		}	
	}
			
}

void insertionSort(int *vet){
	int ant, dps, aux;
		
	for(dps=1;dps<tam;dps++){
		aux=vet[dps];
		ant=dps-1; 
		
		while((ant>=0) && aux<vet[ant]){ 
			vet[ant+1]=vet[ant];
			ant--; //-1;
		}
		vet[ant+1]=aux;
	}
}

int main(){
    int vet[tam];
    
    insereVetor(vet, "--- BubbleSort ---");
    bubbleSort(vet);
    imprime(vet);
    
    insereVetor(vet, "--- SelectionSort ---");
    selectionSort(vet);
    imprime(vet);
    
    insereVetor(vet, "--- InsertionSort ---");
    insertionSort(vet);
    imprime(vet);
    
    system("Pause");
}


/*if(*(vet+i)>*(vet+(i+1)))
{
	 troca=*(vet+i);
	 *(vet+i)=*(vet+(i+1));
	 *(vet+(i+1))=troca;
}
*/ 
