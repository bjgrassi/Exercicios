/*4. Considere listas de valores inteiros e implemente uma função que receba como
parâmetro uma lista encadeada e um valor inteiro n, retire da lista todas as
ocorrências de n e retorne a lista resultante. Essa função deve conter o seguinte
cabeçalho:
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

/*5. Considere listas de valores inteiros e implemente uma função que receba como
parâmetro uma lista encadeada e um valor inteiro n e divida a lista em duas, de
forma à segunda lista começar no primeiro nó logo após na primeira ocorrência de
n na lista original. Essa função deve conter o seguinte cabeçalho:
PonteiroNo separa (PonteiroNo * l,int n)
A função deve retornar um ponteiro para a segunda subdivisão da lista original,
enquanto l deve continuar apontando para o primeiro elemento da primeira subdivisão
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

/*6.Implemente uma função que construa uma nova lista com a intercalação dos nós de
outras duas listas passadas como parâmetros. Essa função deve retornar a lista
resultante. Essa função deve conter o seguinte cabeçalho:
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
