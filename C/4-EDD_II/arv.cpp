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
	g->dir=NULL;
	g->esq=NULL;
}

Arv* insereRecursivo(Arv* a, int n){
	Arv* no=cria(n);
	if(a!=NULL){
		if(a->info>n){
			a->esq=insereRecursivo(a->esq,n);
		}else{
				a->dir=insereRecursivo(a->dir,n);
			}
	}
}

 Arv* insere(Arv* a, int n){
	Arv* no=cria(n);
	if(a!=NULL){
		Arv* aux=NULL, *p=a;
		
		while(p!=NULL){
			aux=p;
			p=(aux->info>n) ? p->esq : p->dir;
		}
		if(aux->info>n)
			aux->esq=no;
			else
				aux->dir=no;
				
		return a;
	}
}


Arv* remove(Arv* a, int n){ //contanto q nao seja o nó e o num exista
	if(a==NULL)
		return 0;
		else{
			Arv* ant, *apaga=a;
			
			if(apaga->info>n){
				ant=apaga;
				apaga->esq=remove(apaga->esq, n);
			}
			else if(apaga->info<n){
				ant=apaga;
				apaga->dir=remove(apaga->dir, n);
			}
			else if(apaga->info==n){
				if(ant->esq==apaga){
					if(apaga->dir==NULL){
						ant->esq=apaga->esq;
						free(apaga);
					}else 
						if(apaga->esq==NULL){
							ant->esq=apaga->dir;
							free(apaga);
						}else 
							if((apaga->esq==NULL)&&(apaga->dir==NULL)){
								ant->esq=NULL;
								free(apaga);
							}else {
								Arv *ult=apaga;
								while(ult->esq==NULL){
									ult=ult->esq;
								}
								
								ant->esq=apaga->esq;
								ult->esq=apaga->dir;
								free(apaga);
							}
				}else{
					if(apaga->dir==NULL){
						ant->dir=apaga->esq;
						free(apaga);
					}else 
						if(apaga->esq==NULL){
							ant->dir=apaga->dir;
							free(apaga);
						}else 
							if((apaga->esq==NULL)&&(apaga->dir==NULL)){
								ant->dir=NULL;
								free(apaga);
							}else {
								Arv *ult=apaga;
								while(ult->dir==NULL){
									ult=ult->dir;
								}
								
								ant->dir=apaga->dir;
								ult->dir=apaga->esq;
								free(apaga);
							}
						
					}
			}else
				printf("Numero nao encontrado\n");	
				return a;
	}
}

void imprime(Arv* lista){
	if(lista!=NULL){
		imprime(lista->esq);
		printf("%d    ", lista->info);
		imprime(lista->dir);
	}
}
int main(){
	Arv* lista=cria(7); //comsegui sem criar nulo
	insereRecursivo(lista, 8);
	insereRecursivo(lista, 9);
	insereRecursivo(lista, 4);
	insereRecursivo(lista, 5);
		
	printf("\nRecursivo - Lista em ordem:\n ");
	imprime(lista);
	
	Arv* lista2=cria(6); //comsegui sem criar nulo
	insere(lista2, 8);
	insere(lista2, 9);
	insere(lista2, 2);
	insere(lista2, 5);
		
	printf("\n\nLista em ordem:\n ");
	imprime(lista2);
	
	
	remove(lista2, 32);
		
	printf("\n\nLista Apagada:\n ");
	imprime(lista2);
	
	system("Pause");
	return 0;
}

/*
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
	
} */ 
