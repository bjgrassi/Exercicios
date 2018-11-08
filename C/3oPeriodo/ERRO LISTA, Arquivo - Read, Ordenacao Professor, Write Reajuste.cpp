#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*A struct professor é um arquivo binário. Fazer um programa q leia o arquivo e passe para uma lista encadeada,
ordene por codigo e aplique uma reajuste (lido do usuario) no valor hora e depois salve em outro arquivo*/

struct professor{
	int cod;
	char nome[30];
	char titulo[50];
	int hora;
	struct professor* prox;
};
typedef struct professor *prof;

prof ordena(prof *l, int tam){
	if((*l)==NULL)
		return 0;
		else{
			prof aux, ant, inicio;
			for(int i=0;i<tam-1;i++){
				aux=*l, ant=aux, inicio=*l;
				while(aux!=NULL){
					if(ant->cod>aux->cod){
						if(aux->prox==NULL){
							ant->prox=NULL;
							aux->prox=inicio;
							*l=aux;
						} else {
							ant->prox=aux->prox;
							aux->prox=ant;
						
							if(inicio==ant){
								*l=aux;
								inicio=aux=*l;
							}
						}
					}
					ant=aux;
					aux=aux->prox;
				}
			}
			return inicio;
		}
}

FILE *p, *r;
int main(){
	prof lista=NULL, novono, listaOrd;
	int cod, cont=0; char nome[30], tit[50]; int h;
	
	if((p=fopen("E:\\arq2.txt","r"))==NULL)
		printf("Erro.\n");
		else{
			do{
				fscanf(p,"%d %s %s %d\n", &cod, &nome, &tit, &h);
				
				novono=(professor*)malloc(sizeof(struct professor));
				novono->cod=cod;
				strncpy(novono->nome, nome, 30);
				strncpy(novono->titulo, tit, 50);
				novono->hora=h;
				novono->prox=lista; //aponta pra lista toda
				
				lista=novono; //insere inicio
				cont++;
			}while(!feof(p)); fclose(p);
			
			listaOrd = lista;
			
			for(lista=lista; lista; lista=lista->prox){
				printf("Codigo: %d, Nome: %s, Titulo: %s, Hora:%d\n", lista->cod, lista->nome, lista->titulo, lista->hora);
			}
			
			listaOrd = ordena(&listaOrd, cont);	
			
			for(listaOrd=listaOrd; listaOrd; listaOrd=listaOrd->prox){
				printf("\nCodigo: %d, Nome: %s, Titulo: %s, Hora:%d", listaOrd->cod, listaOrd->nome, 
																	listaOrd->titulo, listaOrd->hora);
			}
		}
	
	if((p=fopen("E:\\arq2.txt","r"))==NULL) //Tem que abrir o arquivo de novo
		printf("Erro.\n");
	if((r=fopen("E:\\arq2muda.txt","w"))==NULL)
		printf("Erro\n");
		else{
			float reaj, novahora;
			printf("\n\nInsira o reajuste: ");
			scanf("%f", &reaj);
			
			do{
				fscanf(p,"%d %s %s %d", &cod, &nome, &tit, &h);
				
				novahora=reaj*h/100;
				fprintf(r,"%d %s %s %.1f\n", cod, nome, tit, novahora);
			}while(!feof(p));
		}fclose(r); fclose(p);
}
