#include <stdio.h>
#include <stdlib.h>

struct no{
	int info;
	no *prox;
	no *ant;
};
typedef struct no *ptrno;

ptrno cria(int elem){
	ptrno novono;
	novono=(no*)malloc(sizeof(struct no));
	novono->info=elem;
	novono->prox=NULL;
	novono->ant=NULL;
	
	return novono;
}


void insereordenado(ptrno *l, int elem){
	ptrno novono=cria(elem);
	
	if((*l)==NULL)
		(*l)=novono;
	else{
		ptrno aux=*l, ant=aux;
		if(elem<aux->info){
			novono->prox=aux;
			aux->ant=novono;
			(*l)=novono;
		}else{
			aux=aux->prox;
			while((aux!=NULL) && (ant->prox!=NULL)){
				if((ant->info<elem) && (aux->info>elem)){
					novono->ant=ant;
					novono->prox=aux;
					ant->prox=novono;
					aux->ant=novono;
					break;
				}
				ant=aux;
				aux=aux->prox;
				
			}
			
			novono->ant = ant;
			ant->prox=novono;
		}
	}
}

int main(){
	int i, num;
	ptrno lista=NULL;
	
	printf("5 numeros.\n\n");
	for(i=0;i<5;i++){
		printf("Insira o %do numero: ", i+1);
		scanf("%d", &num);
		insereordenado(&lista, num);
	}
	
		
	printf("\n\nLista Ordenada: ");
	while(lista != NULL){
		printf("%d \t", lista->info);
		lista=lista->prox;
	}
	system("Pause");
	return 0;
}
