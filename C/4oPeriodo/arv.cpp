#include<stdio.h>
#include<stdlib.h>

struct arv{
	int info;
	struct arv *esq;
	struct arv *dir;
}; typedef struct arv Arv;

Arv* cria(int elem){
	Arv* g=(Arv*)malloc(sizeof(Arv));
	g->info=elem;
	g->dir=g->esq=NULL;
}
	
Arv* insere(Arv* a, int n){
	if(a==NULL)
		return a;
		else{
			Arv* aux=a, *p=NULL;
			
			while(aux!=NULL){
				p=aux;
				p=(aux->info>n)?p->esq:p->dir;
			}
			if(aux->info>n)
				p->esq->info=n;
				else
					p->dir->info=n;
					
				return a;
		}
}

Arv* insereRecursivo(Arv* a, int n){
	if(a==NULL){
		return a;
	}else{
		if(a->info>n)
			a->esq=insere(a->esq,n);
			else
				a->dir=insere(a->dir,n);
	}
}

Arv* remove(Arv* a, int n){
	if(a==NULL)
		return 0;
		else{
			Arv* p=a->esq, *apaga;
			
			if(a->info>n)
				a->esq=remove(a->esq,n);
				else if(a->info<n)
					a->dir=remove(a->dir,n);
					else{
						if((a->esq==NULL)&&(a->dir==NULL)){
							free(a);
							a=NULL;
						}else if(a->dir==NULL){
							apaga=a;
							a=a->esq;
							free(apaga);
						}else if(a->esq==NULL){
							apaga=a;
							a=a->dir;
							free(apaga);
						}else{
							while(p->dir!=NULL){
								p=p->dir;
								
								a->info=p->dir;
								p->dir=n;
								
								a->esq=remove(a->esq,n);
							}
							
						}
					}
		}
		return a;

	
}

int main(){
	int i, num;
	Arv* lista=NULL;
	
		
	printf("\n\nLista: ");
	while(lista != NULL){
		printf("%d \t", lista->info);
		lista=lista->prox;
	}
	system("Pause");
	return 0;
}
