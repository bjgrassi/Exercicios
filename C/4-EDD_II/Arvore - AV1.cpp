#include<stdio.h>
#include<stdlib.h>

struct arv{
	int info;
	struct arv *esq;
	struct arv *dir;
}; typedef struct arv Arv;

Arv* cria(int elem){
	Arv* arv=(Arv*)malloc(sizeof(Arv));
	arv->info=elem;
	arv->dir=NULL;
	arv->esq=NULL;
}

Arv* insereRecursivo(Arv* arv, int elem){
	
	if(arv==NULL){
		arv=cria(elem);
	}
	else{
		if(arv->info>elem){
			arv->esq=insereRecursivo(arv->esq,elem);
		}else{
				arv->dir=insereRecursivo(arv->dir,elem);
			}
		}
		return arv;
}

void imprime_folha(Arv* a){
	if(a!=NULL){
		if((a->esq==NULL)&&(a->dir==NULL))
			printf("%d   ", a->info);
				
		imprime_folha(a->esq);
		imprime_folha(a->dir);
	}
}

int buscaMenorNo(Arv* a){
	if(a==NULL)
		return 0;
	else{
		if(a->esq==NULL)
			return 0;
			else{
				Arv* p=a->esq;
				
				while(p->esq!=NULL)
					p=p->esq;
					
				return p->info;
			}
	}
}

int qtdFolhas(Arv* a){
	if(a==NULL)
		return 1;
	else
		{
			if((a->esq==NULL)&&(a->dir!=NULL))
				return qtdFolhas(a->esq);
			else
				if((a->esq!=NULL)&&(a->dir==NULL))
					return qtdFolhas(a->dir);
				else
					if((a->esq==NULL)&&(a->dir==NULL))
						return 1;
					else
						return qtdFolhas(a->esq) + qtdFolhas(a->dir);
		}
}
int main(){
	Arv* lista=cria(6);

	//insereRecursivo(lista, 6);
	insereRecursivo(lista, 9);
	insereRecursivo(lista, 7);
	insereRecursivo(lista, 4);
	insereRecursivo(lista, 2);
	insereRecursivo(lista, 5);
	insereRecursivo(lista, 10);
	
	printf("Lista de Folhas: \n");
	imprime_folha(lista);
	
	printf("\n\nQuantidade de Folhas: %d", qtdFolhas(lista));
	
	printf("\n\nO menor noh eh: %d \n", buscaMenorNo(lista));
	
	system("Pause");
	return 0;
}
