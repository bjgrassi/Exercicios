#include<stdio.h>
#include<stdlib.h>

/*10- A maioria das pessoas acha que são azaradas quando procuram uma ficha numa pilha,
sempre tendo receio que a ficha procurada seja uma das últimas da pilha. Uma pessoa que
acredite ser assim azarada pode pesquisar a tal ficha verificando, sucessivamente, a parte
superior e a parte inferior da pilha. Assim, verifica a primeira ficha, em seguida, a
última, em seguida a segunda ficha, em seguida, a penúltima e assim sucessivamente.
Escreva um procedimento que implemente este método de pesquisa.*/

void procura(int valor, ptrno pilha, ptrno pilhaFIM){
	int i, achou=0, tam=5;
	
	while(pilha!=NULL){
		if(pilha->info==valor)
			achou=1;
			
		pilha=pilha->prox
		break;
	}
	
	while(pilhaFIM!=NULL){
		if(pilhaFIM->info==valor)
			achou=1;
			
		pilhaFIM=pilhaFIM->ant;
		break;
	}
}

/*void busca(int tam, int elem){
	int procura=elem, i, j, achou=0;
		while(achou==0){
			for(i=0;i<tam;i++){
				if(procura==elem){
					achou=1;
					break;
				}
			}else
			for(j=tam-1;j>=0;j--){
				if(procura==elem){
					achou=1;
					break;
				}
			}
		}
} */ 
