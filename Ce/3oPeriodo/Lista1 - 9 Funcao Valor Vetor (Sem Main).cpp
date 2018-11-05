/*Faça uma função que, pesquisando num vetor ordenado fornecido como parâmetro, retorne o
índice de um dado elemento. O elemento a pesquisar é também fornecido como parâmetro. Se o
elemento não existir a função deve retornar -1.*/

#include<stdio.h>
#include<stdlib.h>

int indice(int *vet, int valor, int tam){
	int i;
	
	for(i=0;i<tam;i++){
		if(valor==vet[i]) // ou *(vet+i)
			return i;		
	}
	return -1;
}
