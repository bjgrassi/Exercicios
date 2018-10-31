/*A struct professor é um arquivo binário. Fazer um programa q leia o arquivo e passe para uma lista encadeada,
ordene por codigo e aplique uma reajuste (lido do usuario) no valor hora e depois salve em outro arquivo*/

struct professor{
	int cod;
	char nome[30];
	char titulo[50];
	int hora;
};
typedef struct professor prof;

struct no{
	
	int cod;
	char nome[30];
	char titulo[50];
	int hora;
	struct no* prox;
}

ptrno *ordena(ptrno *l, int tam){ //Nao funfa
	if((*l)==NULL)
		return 0;
		else{
			ptrno aux=ant=inicio=*l;
			int i;
			for(i=0;i<tam-1;i++){
				while(aux!=NULL){
					if(ant->cod>aux->cod){
						ant->prox=aux->prox;
						aux->prox=ant;
							if(inicio==ant)
								(*l)=aux;
					}
					ant=aux;
					aux=aux->prox;
				}
			}
			return inicio;
		}
}
int main(){
	ptrno lista=NULL;
	FILE *p, *r;
	
	if((p=fopen("E:\\arq.bin","rb"))==NULL)
		printf("Erro.\n");
		else{
			int cont=0;
			
			fread(&prof,sizeof(struct professor),1,p); //entra no while
			while(!eof(p)){ //transferir tudo pra lista
				novono=(no*)malloc(sizeof(struct no));
				novono->cod=prof.cod;
				novono->nome=prof.nome;
				novono->titulo=prof.titulo;
				novono->hora=prof.hora;
				novono->prox=lista; //aponta pra lista toda
				lista=novono; //insere inicio
				cont++;
				fread(&prof,sizeof(struct professor),1,p);
			}
			ptrno ord=ordena(&lista, cont);	
		}
	}
	
	if((r=fopen("E:\\reaj.bin","wb"))==NULL){
		printf("Erro\n");
		else{
			float reaj
			printf("Insira o reajuste: ");
			scanf("%f", reaj);
			
			fread(&prof,sizeof(struct professor),1,p);
			while(!eof(p)){
				prof.hora=reaj*prof.hora/100;
				fwrite(&prof,sizeof(struct professor,1,r)); //to com duvida se eu escrevo o reaj aqui direto
				fread(&prof,sizeof(struct professor),1,p);
			}
		}
	}
}
