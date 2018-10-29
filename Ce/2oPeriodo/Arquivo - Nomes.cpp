//Exemplo: Ler nomes; gravar em um arquivo; atualizar arquivo

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
char nome[41];
int i;
FILE *p;
void menu(void), gera(void), atualiza(void),exibe(void);
int main()
{   menu();   system("pause");   return 0;  }
void menu(void)
{   char opcao;
    do{ printf("\nG - Gerar\nA - Atualizar\nE - Exibir\nS - Sair\n\t: ");
        fflush(stdin);
        scanf("%c",&opcao);    opcao=toupper(opcao);
        if(opcao=='G')  gera();
        else    if(opcao=='A')  atualiza();
                else    if(opcao=='E')  exibe();
    }while(opcao!='S');
    puts("Saindo...");
}       
void gera(void)
{   int tam;
    if((p=fopen("E:\\NOMES.txt","w"))==NULL)
    {   perror("Erro de abertura\n");
        system("pause");
        exit(0);
    }
    printf("Quantos nomes deseja inserir? ");
    scanf("%d",&tam);
    for(i=0;i<tam;i++)
    {   printf("Digite um nome: ");
        fflush(stdin);
        gets (nome); strupr(nome);
        fprintf(p,"%s\n",nome);
    }fclose(p);
    puts("Arquivo gerado com sucesso!");
    system("pause");         
}
void atualiza(void)
{   int tam;
    if((p=fopen("E:\\NOMES.txt","a"))==NULL)
    {   perror("Erro de abertura\n");
        system("pause");
        exit(0);
    }
    printf("Quantos nomes deseja inserir? ");
    scanf("%d",&tam);
    for(i=0;i<tam;i++)
    {   printf("Digite um nome: ");
        fflush(stdin);
        gets (nome);  strupr(nome);
        fprintf(p,"%s\n",nome);
    }fclose(p);
    puts("Arquivo atualizado com sucesso!");
    system("pause");        
}        
void exibe(void)
{  if((p=fopen("E:\\NOMES.txt","r"))==NULL)
    {   perror("Erro de abertura\n");
        system("pause");
        exit(0);
    }
    puts("Nomes do arquivo:"); 
    fscanf(p,"%s",nome);
    while(!feof(p)) /* Enquanto nao se chegar no final do arquivo */
    {   puts(nome);
        fscanf(p,"%s",nome);
    }fclose(p);

    system("pause");
}

/*
void outro(void)
{    FILE *p1;
     char letra;
     int tot=0;
     
	if((p=fopen("E:\\Arquivos\\NOMES.txt","r"))==NULL)
	{   perror("Erro de abertura\n"); system("pause"); exit(0); }
	if((p1=fopen("E:\\Arquivos\\INICIAL.txt","w"))==NULL)
	{   perror("Erro de abertura\n"); system("pause"); exit(0); }
	
	printf("Primeira letra do nome: "); fflush(stdin);
	scanf("%c", &letra); letra=toupper(letra);
	
	fgets(nome,41,p); //ler todo o nome -> nome[41]
	while(!feof(p)) //percorre o aquivo apontado por p
	{ if(nome[0]==letra)
	  { fprintf(p1,"%s\n",nome) //grava arq apontado por p1
	    tot++; //conta quantos nomes foram gravados
	    }
	    fgets(nome,41,p);
	}
	fclose(p);
	
	if(tot!=0)
	  printf("%d nome foram gravados em INICIAL.txt\n", tot);
	    else
	        printf("Nao ha nomes inciados com %c! Arquivo vazio!\n",letra);
	        
    fclose(p1);
    system("pause");
} */ 
