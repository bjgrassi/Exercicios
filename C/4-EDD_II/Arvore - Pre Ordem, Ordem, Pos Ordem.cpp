#include<stdio.h>
#include<stdlib.h>

struct arv{
	char info;
	struct arv *esq;
	struct arv *dir;
};
typedef struct arv Arv;

Arv* cria(char n, Arv* lef, Arv* rig){
	Arv* p=(Arv*)malloc(sizeof(Arv));
	p->info=n;
	p->esq=lef;
	p->dir=rig;
	return p;
}

void imprimepre(Arv* a){
	if(a!=NULL){
		printf("%c    ", a->info);
		imprimepre(a->esq);
		imprimepre(a->dir);	
	}
	
}

void imprimesim(Arv* a){
	if(a!=NULL){
		imprimesim(a->esq);
		printf("%c    ", a->info);
		imprimesim(a->dir);
	}
		
}

void imprimepos(Arv* a){ //imprime dos nos menores ate a raiz
	if(a!=NULL){
		imprimepos(a->esq);
		imprimepos(a->dir);
		printf("%c    ", a->info);
	}
		
}

int main(){
	Arv* a2=cria('A', NULL, NULL); //1
	Arv* a3=cria('C', NULL, NULL); //3
	Arv* a4=cria('E', NULL, NULL); //5
	Arv* a5=cria('G', NULL, NULL); //7
	Arv* a6=cria('B', a2, a3); //2
	Arv* a7=cria('F', a4, a5); //6
	Arv* raiz=cria('D', a6, a7); //4
	
	
	printf("Impressao em pre ordem:\n");
	imprimepre(raiz);
	printf("\n\nImpressao simetrica/em ordem:\n");
	imprimesim(raiz);
	printf("\n\nImpressao pos ordem:\n");
	imprimepos(raiz);
	printf("\n\n\n");
	
	system("pause");
	return 0;
}
