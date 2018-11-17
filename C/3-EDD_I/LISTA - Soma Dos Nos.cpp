#include<stdio.h>
#include<stdlib.h>


struct no{
	int info;
	no *prox;
};
typedef struct no *ptrno;

ptrno criano(int elem){
	ptrno novono;
	novono=(no*)malloc(sizeof(struct no));
	novono->info=elem;
	novono->prox=NULL;
	
	return novono;
}

void inserefinal(ptrno *l, int elem){
     ptrno aux=*l;
     
     if(aux!=NULL){
       while(aux->prox != NULL)
          aux=aux->prox;
          
          aux->prox=criano(elem);
    }
      else
        *l=criano(elem);
}
       
int soma(ptrno *l){
	if((*l)==NULL)
		return 0;
		else{
			ptrno aux=*l;
			int cont=0;
			if(aux->info!=NULL){
				cont=aux->info;
				return cont + soma(&aux->prox);
			}else
				return cont;
		}
}

int main(){
	ptrno lista=NULL;
	inserefinal(&lista,10);
	inserefinal(&lista,5);
	inserefinal(&lista,6);
	
	printf("Soma: ");
	soma(&lista);
	printf("%d \n ", soma(&lista));
	
	system("Pause");
	return 0;
}
