#include<stdio.h>
#include<stdlib.h>

//1
ptrno busca(ptrno l, int codigo){
	if(l==NULL)
		return 0;
		else{
			if(codigo!=l->cod)
				return busca(l->prox, codigo)
				else
					return l;
		}
			
}

//3-
double soma(ptrarv a){
	if(a==NULL)
		return 0;
		else{
			return a->info + soma(a->esq) + soma(a->dir);
		}
}

//5-
void preordem(ptrarv a){
	if(a!=NULL){
		printf("%d\n", a->info);
		preordem(a->esq);
		preordem(a->dir);
	}
}

void posordem(ptrarv a){
	if(a!=NULL){
		posordem(a->esq);
		posordem(o->dir);
		printf("%d", a->info);
	}
}

void simetrica(ptrarv a){
	if(a!=NULL){
		simetrica(a->esq);
		printf("%d", a->info);
		simetrica(a->dir);
	}
}

/* 4.2 Implemente uma função que retorne a quantidade de folhas de uma árvore
binária. Essa função deve obedecer ao protótipo: 
int folhas (Arv* a); */

int folhas(ptrarv a){
	if(a!=NULL){
		if(a->esq!=NULL && a->dir!=NULL)
			return folhas(a->esq) + folhas(a->dir);
			else
				return 1;
				
		if(a->esq!=NULL && a->dir==NULL)
			return folhas(a->esq);
		if(a->esq==NULL && a->dir!=NULL)
			return folhas(a->dir);
	}else return 0;
}

/* Lista II – Exercício 4.2 */
int folhas (Arv* a){
	if (arv_vazia(a->esq) && arv_vazia(a->dir)) 
		return 1;
		else 
			if (!arv_vazia(a->esq) && arv_vazia(a->dir)) 
				return folhas(a->esq);
				else 
					if (arv_vazia(a->esq) && !arv_vazia(a->dir)) 
					return folhas(a->dir);
					
			return folhas(a->esq) + folhas(a->dir);
} 

/* 4.4 Implemente uma função que compare se duas árvores binárias são iguais.
Essa função deve obedecer ao protótipo:
Arv* igual (Arv* a, Arv* b);*/

int igual(ptrarv a, ptrarv b){
	if(a==NULL && b==NULL){
		return 0;
		else{
			if(a->info == b->info){
				igual(a-> esq, b->esq);
				igual(a->dir, b->dir);
			}else
				return 0;
		}
	}
}

/* Lista II – Exercício 4.4 */
int igual (Arv* a, Arv* b){
	return arv_vazia(a) && arv_vazia(b) 
	|| 
	(!arv_vazia(a) && !arv_vazia(b) && a->info == b->info && igual(a->esq, b->esq) && igual(a->dir, b->dir));
}

int ocorrencias(ptrarv a, int x){
	if(a!=NULL){
		if(a->info==x)
			return 1 + ocorrencias(a->dir, x);
		if(a->info<x)
			return ocorrencias(a->dir, x);
			else
				return ocorrencias(a->esq, x);
	}else
		return 0;
}

int ocorrencias_x (Arv* a, int x){
	if (a==NULL) 
	return 0;
		if (a->info == x) 
			return 1 + ocorrencias_x(a->dir, x);
		if (a->info < x) 
			return ocorrencias_x(a->dir, x);
	
	return ocorrencias_x(a->esq, x);
}

int umfilho(ptrarv a){
	int cont=0;
	if(a!=NULL){
		if(a->esq!=NULL && a->dir!=NULL)
			return umfilho(a->esq) + umfilho(a->dir);
			else	
				return cont;
		
		if(a->esq!=NULL && a->dir==NULL)
			return 1+cont;
		if(a->esq==NULL && a->dir!=NULL)
			return 1+cont;
	}else
	return 0;
}

ptrarv copia(ptrarv a){
	ptrarv b=NULL;
	if(a!=NULL){
		b->info=a->info;
		copia(a->esq);
		copia(a->dir);
		return b;
	}else
		return b;
}

int maiores (ptrarv a, int x){
	if(a!=NULL){
		if(a->info<x)
			return maiores(a->dir, x);
			else
				return 1 + maiores(a->dir, x);
	}else
		return 0;
}

int pares(ptrno a){
	if(a!=NULL){
		if(a->info%2==0)
			return 1 + pares(a->dir) + pares(a->esq);
			else
			return pares(a->dir) + pares(a->esq);
		
	}else
	return 0;
}
