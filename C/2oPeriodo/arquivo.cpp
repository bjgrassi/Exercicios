/*1.   	struct produto
    	{ int codigo; char descricao[30]; float preco; };
O programa deve:
a) Declarar vetor com 50 produtos com o lay-out da estrutura;
b) Cadastrar os produtos
c) Reajustar os preços, com percentual informado pelo usuário;
d) Exibir a estrutura antes e depois do reajuste. */

#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define tam 3
struct r {
	int cod;
	char desc[30];
	float preco;
} prod[tam];

FILE *p,*p1;
void cadastrar(void), reajustar(void), exibir(void);

int main()
{
	int opcao;
	
	printf("Escolha uma opcao:\n1 - cadastrar\n2 - reajustar\n3 - exibir\n4 - sair\n");
	scanf("%d",&opcao);
	
	while(opcao!=4){
		if(opcao==1)
		    cadastrar();
		else
		    if(opcao==2)
		        reajustar();
		    else
		        if(opcao==3)
		            exibir();
					else
					    if(opcao!=4)
				            printf("Opcao invalida!");
				            
		printf("Escolha uma opcao:\n1 - cadastrar\n2 - reajustar\n3 - exibir\n4 - sair\n");
		scanf("%d",&opcao);
    }
	system("pause");
	return 0;	               
}

void cadastrar(void)
{
	system("cls");
	if((p=fopen("G:\\Prog2\\arq.txt","w"))==NULL)
	{
		perror("Erro de abertura.");
		system("pause");
		exit(0);
	}
	
	for(int i=0;i<tam;i++)
	{
		printf("Codigo: ");
		scanf("%d",&prod[i].cod);
		printf("Descricao: "); fflush(stdin);
		gets(prod[i].desc); strupr(prod[i].desc);
		printf("Preco: ");
		scanf("%f",&prod[i].preco);
		fprintf(p,"Codigo: %d\nDescricao: %s\nPreco: %.1f\n\n", prod[i].cod, prod[i].desc, prod[i].preco);
	}fclose(p);
	puts("Arquivo cadastrado com sucesso! ");
}

void reajustar(void)
{
	system("cls");
	if((p=fopen("G:\\Prog2\\arq.txt","r"))==NULL)
	{
		perror("Erro de leitura.\n");
		system("pause");
		exit(0);
	}
	if((p1=fopen("G:\\Prog2\\arq2.txt","w"))==NULL)
	{
		perror("Erro de leitura.\n");
		system("pause");
		exit(0);
	}
		float perc;
		printf("Porcentagem:");
		scanf("%f",&perc);
		if(perc==0)
		  perc=1;
	int i=0;
	fscanf(p,"%d",&prod.cod);	      		
	while(!feof(p))
	{
		printf("%d",prod[i].cod);
		prod[i].preco += (prod[i].preco * (perc/100.0));
		fprintf(p1,"%d",prod[i].cod);
		fscanf(p,"%f",&prod.preco);
		printf("%.1f",prod[i].preco);
		prod[i].preco += (prod[i].preco * (perc/100.0));
		fprintf(p1,"%.1f",prod[i].preco);
		fscanf(p,"%d",&prod.cod);
	}
	fclose(p);
	fclose(p1);
	puts("Arquivo gerado com sucesso.");
}

void exibir(void)
{
	system("cls");
	if((p=fopen("G:\\Prog2\\arq.txt","r"))==NULL)
	{
		perror("Erro de Leitura.\n");
		system("pause"); 
		exit(0);
	}
	if((p1=fopen("G\\Prog2\\arq2.txt","r"))==NULL)
	{
		perror("Erro de Leitura.\n");
		system("pause");
		exit(0);
	}
	
	for(int i=0;i<tam;i++)
	{
		fscanf(p,"%d", &prod[i].cod);
		fscanf(p,"%s", &prod[i].desc);
		fscanf(p,"%f", &prod[i].preco);
	    printf("Codigo: %d\nDescricao: %s\nPreco: %.1f\n\n",prod[i].cod, prod[i].desc, prod[i].preco);
	}
	printf("\nPreco com reajuste:\n");
	for(int i=0;i<tam;i++)
	{
		fscanf(p1,"%f", &prod[i].preco);
	    printf("Codigo: %d\nDescricao: %s\nPreco: %.1f\n\n",prod[i].cod, prod[i].desc, prod[i].preco);
	}fclose(p); fclose(p1);
}
