/*13. Implemente uma função que tenha como valor de retorno o comprimento de uma lista
encadeada, isto é, que calcule o número de nós de uma lista.*/

#include<stdio.h>
#include<stdlib.h>

int nos(ptrno l){

	if(l==NULL){
		return 0;
	}else{
		return 1 + nos(l->prox);
		}
	}
}

int comprimento(ptrno *l){
	if(*l==NULL)
		return 0;
		else{
			ptrno aux=*l;
			int cont=0;
			while(aux!=NULL){
				cont++;
				aux->=prox;
			}
			return cont;
		}
}

/*int vazia(node *LISTA)
{
	if(LISTA->prox == NULL)
		return 1;
	else
		return 0;
}*/

/*14. Considere listas encadeadas de valores inteiros e implemente uma função para retornar
o número de nós da lista que possuem o campo info com valores maiores que n.*/

#include<stdio.h>
#include<stdlib.h>

int maiores(ptrno l, int n){
	if(l->info<n && l!=NULL){
		return maiores(l->prox, n);
		else
			return 1 + maiores(l->prox, n);
	}else
		return 0;
}

int campoN(ptrno *l, int n){
	if((*l)==NULL)
		return 0;
		else{
			ptrno aux=*l; int cont=0;
			while(aux!=NULL){
				if(aux->info>n){
					cont++;
				}
				aux=aux->prox;
			}
			return cont;
		}
}

/*15. Implemente uma função que tenha com valor de retorno o ponteiro para o último nó de
uma lista encadeada passada por parâmetro.*/

ptrno pultimo(ptrno *l){
	if(*l!=NULL){
		if(*l->prox==NULL)
			return pultimo(*l->info)
			else
				return pultimo(*l->prox)
	}else
		return 0;
}

int ultimo(ptrno *l){
	if((*l)==NULL)
		return 0;
		else{
			ptrno aux=*l;
			while(aux->prox!=NULL){
				aux=aux->prox;
			}
			return aux->info;
		}
}

/*16. Implemente uma função que receba duas listas encadeadas de valores reais e retorne a
lista resultante da concatenação das duas listas recebidas como parâmetros, isto é, após a
concatenação, o último elemento da primeira lista deve apontar para o primeiro elemento da
segunda lista.*/

ptrno listona(ptrno l1, ptrno l2){
	ptrno *l3;
	if(l2==NULL && l1==NULL){
		return 0;
	}else 
		if(l1==NULL && l2!=NULL)
			return l3=l2;
		else 
			if(l2==NULL && l1!=NULL)
				return l3=l1;
			else
				if(l1->prox!=NULL)
					return listona(l1->prox, l2);
				else
					l1->prox=l2;
					return l3 = l1;
}

ptrno listona(ptrno l1, ptrno l2){
	ptrno *l3;
	if(l1==NULL){
		return listona(0,l2); //seria return 1?
		else{
			l3->info=l1->info;
			l3->prox=NULL;
			return listona(l3->prox);
		}
	}
	if(l2==NULL && l1==NULL){
		return 0;
	}else{
		l3->info=l2->info;
		l3->prox=NULL;
		return listona(l3->prox);
	}
}

/*17. Considere listas que armazenam cadeias de caracteres e implemente uma função para
testar se duas listas passadas com parâmetros são iguais.*/

void compara(ptrno l1, ptrno l2){
	if(l1!=NULL && l2!=NULL){
		if(strcmp(l1,l2)==0)
			printf("Iguais");
			else
				printf("Diferentes");
	}else
		printf("Nao existe(m)");
}

/*18. Implemente um procedimento que insere no início de uma lista encadeada passada por
parâmetro um elemento também passado por parâmetro. Declare também a estrutura Nó
utilizada.*/

struct no{
	int elem;
	no *prox;
};
typedef struct no *ptrno;

void insereinicio(ptrno *l, int elem){ //25.69
	ptrno novono=cria(elem), aux=*l;
	
	if(aux==NULL){
		*l->info=novono;
	}else{
		novono->prox=aux;
		*l=novono;
		
	}
}

//Fazer busca de um elemento recursivamente em uma lista

ptrno busca(ptrno *l, int elem){
	if(*l==NULL)
		return 0;
		else{
			if((*l)->info!=elem)
				return busca((*l)->prox, elem);
				else
					return (*l)->info;
		}
}
