/*Fa�a uma fun��o que, pesquisando num vetor ordenado fornecido como par�metro, retorne o
�ndice de um dado elemento. O elemento a pesquisar � tamb�m fornecido como par�metro. Se o
elemento n�o existir a fun��o deve retornar -1.*/

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
