#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define tam 2
struct curso {
	int codigocurso, vagas, concorrencia;
	char descricao[201];
}cur[tam];
struct candidato{
	int numcandidato, codigocan;
	char sexo;
}cand[tam];

int main(){
	int qtd[tam]={0}, fem=0, mas=0, hom[tam]={0}, cursoconcorr=0, curso=0, maior=0;
	char sexo;
	
	for(int i=0;i<tam;i++){
		printf("-> Codigo do curso %d: ", i+1);
		scanf("%d", &cur[i].codigocurso);
		printf("Num vagas curso %d: ", i+1);
		scanf("%d", &cur[i].vagas);
		printf("Descricao do curso %d: ", i+1); fflush(stdin);
		gets(cur[i].descricao);
		printf("Concorrencia do curso %d no ano anterior: ", i+1);
		scanf("%d", &cur[i].concorrencia);
		}
	
	for(int i=0; i<tam; i++) {
		printf("\n-> Num do candidato %d: ", i+1);
		scanf("%d", &cand[i].numcandidato);
		printf("Codigo do curso do candidato %d: ", i+1);
		scanf("%d", &cand[i].codigocan);
		
		do{
		printf("Sexo do candidato %d: ", i+1); 
		fflush(stdin);
		scanf("%c", &cand[i].sexo); 
		} while ((cand[i].sexo!='f') && (cand[i].sexo!='m')); //pq é && e nao ||?
	}
		
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++) {
			if(cur[i].codigocurso==cand[j].codigocan)
				qtd[j]++;
		}
						
		if(cand[i].sexo=='m'){
			hom[i]++;
			mas++;
		}

		if(cand[i].sexo=='f')
			fem++;
	}
	for(int i=0;i<tam;i++){
		if(cur[i].vagas>cur[i].concorrencia)
			cursoconcorr++;
		}	
	for(int i=0;i<tam;i++){
		if(hom[i]>maior){
			maior=hom[i];
			curso=cand[i].codigocan;
		}
	}			
	
	for(int i=0;i<tam;i++)
		printf("\n%d inscricoes para %d vagas no curso %d", qtd[i], cur[i].vagas, i+1);
	printf("\n");
	
	printf("Ultrapassaram a concorrencia: %d cursos \n", cursoconcorr);
	if(curso > 0)
		printf("Curso com mais homens: %d\n", curso);
		else
			printf("Nenhum Curso tem homens OK\n");
	
	float tot = fem+mas;
	printf("Porcentagem de mulheres: %.2f%% \n\n", fem*100/tot);
	
	system("pause");
	return 0;
	
}
