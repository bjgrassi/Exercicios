/*4. Considere listas de valores inteiros e implemente uma fun��o que receba como
par�metro uma lista encadeada e um valor inteiro n, retire da lista todas as
ocorr�ncias de n e retorne a lista resultante. Essa fun��o deve conter o seguinte
cabe�alho:
PonteiroNo retira_n (PonteiroNo * l, int n)*/

ptrno retira_n(ptrno *l, int n){
	if((*l)==NULL){
		return 0;
		else{
			ptrno ant=*l, apaga=ant->prox;
			while(apaga!=NULL){
				if(apaga->info==n){
					ant->prox=apaga->prox;
					free(apaga);
					apaga=ant->prox;
				}else {
					ant=apaga;
					apaga=apaga->prox;
				}
				
				if(apaga->prox==NULL) && (apaga->info==n){
					ant->prox=NULL;
					free(apaga);
				}
			}
			
			if((*l)->info==n){
				apaga=*l;
				(*l)=(*l)->prox;
				free(apaga);
			}
			return *l;
		}
	}
}

/*5. Considere listas de valores inteiros e implemente uma fun��o que receba como
par�metro uma lista encadeada e um valor inteiro n e divida a lista em duas, de
forma � segunda lista come�ar no primeiro n� logo ap�s na primeira ocorr�ncia de
n na lista original. Essa fun��o deve conter o seguinte cabe�alho:
PonteiroNo separa (PonteiroNo * l,int n)
A fun��o deve retornar um ponteiro para a segunda subdivis�o da lista original,
enquanto l deve continuar apontando para o primeiro elemento da primeira subdivis�o
da lista.*/

ptrno separa(ptrno *l, int n){
	if((*l)==NULL)
		return 0;
		else{
			ptrno ant, aux=*l;
			while(aux!=NULL){
				ant=aux;
				aux=aux->prox;
				if(ant->info==n){
					ant->prox=NULL;
					return aux;
				}
			}
			return *l;
		}
}

/*6.Implemente uma fun��o que construa uma nova lista com a intercala��o dos n�s de
outras duas listas passadas como par�metros. Essa fun��o deve retornar a lista
resultante. Essa fun��o deve conter o seguinte cabe�alho:
PonteiroNo merge (PonteiroNo *l1, PonteiroNo *l2)*/

ptrno merge(ptrno *l1, ptrno *l2){
	if((*l1)==NULL){
		return *l2;
		else{
			ptrno aux=*l1;
			while(aux->prox!=NULL){
				aux=aux->prox;
				if(aux->prox==NULL){
					aux->prox=*l2;
					return l1;
				}
			}
		}
	}
}
