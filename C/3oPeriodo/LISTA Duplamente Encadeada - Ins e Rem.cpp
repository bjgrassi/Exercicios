#include<stdio.h>
#include<stdlib.h>

struct no{
	int info;
	no *ant;
	no *pos;
}; typedef struct no *nodup;

nodup criano(int elem){
	nodup novono;
	novono=(no*)malloc(sizeof(struct no));
	novono->info=elem;
	novono->ant=NULL;
	novono->pos=NULL;
	
	return novono;
}

void insereinicio(nodup *l, int elem){
	nodup novono=criano(elem), aux=*l;
		
		if(*l!=NULL){
			aux->ant=novono;
			novono->pos=aux;
			*l=novono;
		}else
			*l=novono;
}

void inserefinal(nodup *l, int elem){
	nodup novono=criano(elem), aux=*l;
		if(aux==NULL)
			*l=novono;
			else{
				while(aux->pos!=NULL){
					aux=aux->pos;
				}
				aux->pos=novono;
				novono->ant=aux;
			}
}

void removefinal(nodup *l){
	nodup aux=*l, apaga=aux;
	if(aux!=NULL){
		while(apaga->pos!=NULL){
			aux=apaga;
			apaga=apaga->pos;
		}
		if(apaga->pos==NULL){
			aux->pos=NULL;
			free(apaga);
		}
	}
}

void removeinicio(nodup *l){
	nodup apaga=*l;
	if(*l!=NULL){
		if(apaga->ant==NULL){
			*l=(*l)->pos;
			(*l)->ant=NULL;
			free(apaga);
		}
	}
}

int main(){
	int i, num;
	nodup lista=NULL;

	insereinicio(&lista, 4);
	insereinicio(&lista, 2);
	inserefinal(&lista, 6);
	inserefinal(&lista, 9);
	
	nodup printInsere=lista;
	printf("Lista 1: ");
	while(printInsere != NULL){
		printf("%d \t", printInsere->info);
		printInsere=printInsere->pos;
	}
	printf("\n");
	
	removefinal(&lista);
	removeinicio(&lista);
	
	printf("\n\nLista 2: ");
	for(lista=lista; lista; lista=lista->pos){
		printf("%d \t", lista->info);
	}
	printf("\n");
	
	system("Pause");
	return 0;
}
