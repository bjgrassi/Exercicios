#include<stdio.h>
#include<stdlib.h>

//1-
struct no{
	int cod;
	no *prox;
};
typedef struct no *ptrno;

FILE *p;

int main(){
	ptrno lista, novono;
	Aluno umAluno;
	
	
	if((p=fopen("arquivo.bin","rb"))==NULL)
		printf("Erro.");
		else{
			lista=NULL;
				
				while(!eof(p)){
					fread(&umAluno, sizeof(struct Aluno), 1, p);
					novono=(ptrno)malloc(sizeof(no)); //novono=(no*)malloc(sizeof(struct no));
					novono->cod=umAluno.cod;
					novono->nome=umAluno.nome;
					novono->nota=umAluno.nota;
					novono->prox=lista;
					lista=novono;
					float soma+=umAluno.nota;
				}
				float media=soma/comprimento(lista);
				printf("Media da turma: %.2f", media);
		}
		return 0;
}
