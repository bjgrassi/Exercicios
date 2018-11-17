#include<stdio.h>
#include<stdlib.h>

struct arv{
	int info;
	struct arv *esq;
	struct arv *dir;
};
typedef struct arv Arv;

Arv* cria(int n, Arv* lef, Arv* rig){
	Arv* p=(Arv*)malloc(sizeof(Arv));
	p->info=n;
	p->esq=lef;
	p->dir=rig;
	return p;
	
}

void imprime(Arv* a){
	if(a!=NULL){
		imprime(a->dir);
		printf("%d    ", a->info);
		imprime(a->esq);
	}
		
}

int main(){
	
	Arv* a1=cria(5, NULL, NULL);
	Arv* a2=cria(15, NULL, NULL);
	Arv* a3=cria(10, a1, a2);
	Arv* a4=cria(40, NULL, NULL);
	Arv* a5=cria(30, NULL, a4);
	Arv* a6=cria(20, a3, a5);
	
	printf("\nImpressao ordem decrescente:\n");
	imprime(a6);
	printf("\n\n\n");
	
	system("pause");
	return 0;
}
