#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//1-

struct Aluno{
	int cod;
	char nome[30];
	float nota;
	Aluno *prox;
};
typedef struct Aluno umAluno;

umAluno *insereinicio(umAluno *lista, int num, char nome, float nota)
{
       umAluno *aux;
       aux = (umAluno*)malloc(sizeof(umAluno));
       aux -> cod = num;
       aux -> nome[30] = nome;
       aux -> nota = nota;
       aux -> prox = lista;
       return aux;
}

FILE *p;

int main(){
//Essa area nao roda com exito. O 'for' nao acontece
//Foi um teste q eu quis fazer e nao achei a maneira correta, pq so imprime o 1o da lista
	umAluno local[] = {{1, "Luiz", 10, NULL}, {2, "Paulo", 10}, {3, "Maria", 10}};
			
	printf("Alunos Local: \n");
	//for(local=local; local; local=local->prox)
		printf("Codigo: %d, Nome: %s, Nota: %.1f\n", local->cod, local->nome, local->nota);
//

	umAluno *aux=NULL, *lista=aux;
	int num, comprimento=0;
	char nome[30];
	float nota, soma=0;
	
	printf("\nAlunos Arquivo: \n");
	if((p=fopen("E:\\arq.txt","r"))==NULL) //O arq precisa existir
		printf("Erro.");
		else{
			do{
				fscanf(p,"%d %s %f", &num, &nome, &nota);
				
				//lista = insereinicio(lista, num, nome[30], nota); //ou desse jeito
				aux = (umAluno*)malloc(sizeof(umAluno));
		        aux -> cod = num;
		        aux -> nota = nota;
		        strncpy(aux->nome, nome, 30);
		        aux -> prox = lista;
		        lista=aux;
				
				soma+=nota;
				comprimento++;
			}while(!feof(p));
			fclose(p);
			
			for(lista=lista; lista; lista=lista->prox){
				printf("Codigo: %d, Nome: %s, Nota: %.1f\n", lista->cod, lista->nome, lista->nota);
			}
			
			float media=soma/comprimento;
			printf("Media da turma 2: %.2f\n\n", media);
		}
		return 0;
}
