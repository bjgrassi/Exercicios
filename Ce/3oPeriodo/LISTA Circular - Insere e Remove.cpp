#include<stdio.h>
#include<stdlib.h>

struct no{
	int info;
	no* prox;
	//no* ant;
	bool ultimo;
};
typedef struct no *ptrno;

ptrno cria(int elem){
	ptrno novono = (no*)malloc(sizeof(struct no));
	novono->info=elem;
	//novono->ant=NULL;
	novono->prox=NULL;
	novono->ultimo=false;
	
	return novono;
}

void insereinicio(ptrno *l, int elem){
	ptrno novono=cria(elem), aux=*l;
	if(aux==NULL){
		*l=novono;
		novono->prox=*l;
		novono->ultimo=true;
	}else{
		while(aux->ultimo!=true){
			aux=aux->prox;
		}
		if(aux->ultimo==true){
			aux->prox=novono;
			novono->prox=*l;
			*l=novono;
		}
	}
}

void inserefinal(ptrno *l, int elem){
	ptrno novono=cria(elem), aux=*l;
	if(aux==NULL){
		*l=novono;
		novono->prox=*l;
		novono->ultimo=true;
	}else{
		while(aux->ultimo!=true){
			aux=aux->prox;
		}
		if(aux->ultimo==true){
			aux->prox=novono;
			aux->ultimo=false;
			novono->prox=*l;
			novono->ultimo=true;
		}
	}
}

void removeinicio(ptrno *l){
	ptrno apaga=*l, aux=apaga->prox, auxFim=apaga;
	if((*l)!=NULL){
		while(auxFim->ultimo!=true){
			auxFim=auxFim->prox;
		}
		auxFim->prox=aux;
		free(apaga);
		*l=aux;
	}
}

void removefinal(ptrno *l){
	ptrno apaga=*l, aux=apaga;
	if((*l)!=NULL){
		while(apaga->ultimo!=true){
			aux=apaga;
			apaga=apaga->prox;
		}
		if(apaga->ultimo==true){
			aux->prox=*l;
			aux->ultimo=true;
			free(apaga);
		}
	}
}

int main(){
	ptrno lista=NULL;
	insereinicio(&lista,10);
	inserefinal(&lista,5);
	insereinicio(&lista,4);
	inserefinal(&lista,6);
	
	ptrno printInsere=lista;
	printf("Lista 1: ");
	while(printInsere->ultimo!=true){
		printf("%d \t", printInsere->info);
		printInsere=printInsere->prox;
	}
	printf("%d \t\n", printInsere->info);
	
	removeinicio(&lista);
	removefinal(&lista);
	
	printf("Lista 2: ");
		while(lista->ultimo!=true){
			printf("%d \t", lista->info);
			lista=lista->prox;
		}
	printf("%d \t\n", lista->info);
	printf("\n ");
	
}
