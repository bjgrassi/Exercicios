#include<stdio.h>
#include<stdlib.h>

//O vetor tem que estar ordenado para acontecer a Busca Binaria
//Separei do arq "Ordenacao de Vetores.cpp" para encontrar o arquivo

int busca_binaria(int *vet, int tam, int n){
	
	int ini=0, fim=tam-1;
		while(ini<=fim){
			int meio = (ini + fim)/2;
			if(n<vet[meio])
				fim=meio-1;
				else
					if(n>vet[meio])
						ini=meio + 1;
						else 
							return meio;
		}
		return -1; //nao encontrou
}


int main(){
	int tam=5, vet[tam]={1,2,3,4,5}, val;
	
	printf("Escolha o valor de 1 a 5: ");
	scanf("%d", &val);
	
	printf("\nPosicao do Vetor: %d \n", busca_binaria(vet, tam, val));
}
