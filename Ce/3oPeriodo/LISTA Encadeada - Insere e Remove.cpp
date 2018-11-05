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
	
void insereinicio(ptrno *l, int elem){
	ptrno novono;
		
	novono=criano(elem);
	novono->prox=*l;
	*l=novono;
}	

void removeinicio(ptrno *l){ //
  ptrno apaga=*l;
  
  if(*l!=NULL){
	    *l=(*l)->prox;
	    free(apaga);
    }
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
       
void removefinal(ptrno *l){  //
	ptrno ant, apaga;
	apaga=ant=*l;
	
	if(apaga!=NULL){
		while(apaga->prox!=NULL){
			ant=apaga;
			apaga=apaga->prox;
		}
		free(apaga);
		ant=ant->prox=NULL;
    }
}
       

int main(){
	ptrno lista=NULL;
	insereinicio(&lista,10);
	inserefinal(&lista,5);
	insereinicio(&lista,4);
	
	ptrno printInsere=lista;
	printf("Lista 1: ");
		while(printInsere != NULL){
			printf("%d \t", printInsere->info);
			printInsere=printInsere->prox;
		}
	printf("\n");
	
	removefinal(&lista);
	removeinicio(&lista);
	
	printf("Lista 2: ");
		while(lista != NULL){
			printf("%d \t", lista->info);
			lista=lista->prox;
		}
	printf("\n ");
	
	system("Pause");
	return 0;
}
