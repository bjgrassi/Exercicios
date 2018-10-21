/*3) Ler no arquivo arq.txt códigos e os preços armazenados.
 Exiba na tela os códigos com os respectivos preços.
Exibir na tela o valor total. */
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
struct r
{   int cod; float pr; }prod;
FILE *p;
void menu(void),gera(void),atualiza(void),exibe(void), total(void);
int main()
{   menu(); system("pause"); return 0;}
void menu(void)
{   char opcao;
    do{
        printf("\nG - Gerar\nA - Atualizar\nE - Exibir\nT - Valor Total\nS - Sair\n\t: ");
        fflush(stdin);
        scanf("%c",&opcao);
        opcao=toupper(opcao);
        if(opcao=='G')
            gera();
        else
            if(opcao=='A')
                atualiza();
            else
                if(opcao=='E')
                    exibe();
            else
                if(opcao=='T')
                    total();
    }   while(opcao!='S');
        puts("Saindo...");
} 

void gera(void)
{   printf("Arquivo criado! TODOS OS dados anteriores foram perdidos\n");
    if((p=fopen("C:\\Users\\brukgrassi\\Documents\\Meus Documentos\\Sistemas Informacao\\Exercicios\\C\\2oPeriodo\\arq.xls","w"))==NULL)
    {   perror("Erro de abertura\n");
        system("pause");
        exit(0);
    }
    printf("Codigo maior que zero: ");
    scanf("%d",&prod.cod);
    while(prod.cod>0)
    {   printf("Preco: ");
        scanf("%f",&prod.pr);
        fprintf(p,"%d\t%.2f\n",prod.cod,prod.pr);
        printf("Codigo maior que zero: ");
        scanf("%d",&prod.cod);
    }
    fclose(p);
    puts("\nArquivo gerado com sucesso!\n");
    
}
void atualiza(void)
{   printf("Arquivo sera atualizado no final\n");
    if((p=fopen("C:\\Users\\brukgrassi\\Documents\\Meus Documentos\\Sistemas Informacao\\Exercicios\\C\\2oPeriodo\\arq.xls","a"))==NULL)
    {   perror("Erro de abertura\n");
        system("pause");
        exit(0);
    }
    printf("Codigo maior que zero: ");
    scanf("%d",&prod.cod);
    while(prod.cod>0)
    {   printf("Preco: ");
        scanf("%f",&prod.pr);
        fprintf(p,"%d\t%.2f\n",prod.cod,prod.pr);
        printf("Codigo maior que zero: ");
        scanf("%d",&prod.cod);
    }
    fclose(p);
    puts("\nArquivo atualizado com sucesso!\n");
      
}        
void exibe(void)
{  if((p=fopen("C:\\Users\\brukgrassi\\Documents\\Meus Documentos\\Sistemas Informacao\\Exercicios\\C\\2oPeriodo\\arq.xls","r"))==NULL)
    {   perror("Erro de abertura\n"); system("pause"); exit(0); }
    printf("\nCodigo\tPreco\n");
    fscanf(p,"%d%f",&prod.cod,&prod.pr);
    while(!feof(p))
    {   printf("%d\tR$%.2f\n",prod.cod,prod.pr);
        fscanf(p,"%d%f",&prod.cod,&prod.pr);
    } fclose(p);
}
void total (void)
{   float tot=0.0;
    if((p=fopen("C:\\Users\\brukgrassi\\Documents\\Meus Documentos\\Sistemas Informacao\\Exercicios\\C\\2oPeriodo\\arq.xls","r"))==NULL)
    {   perror("Erro de abertura\n"); system("pause"); exit(0);}
    fscanf(p,"%d%f",&prod.cod,&prod.pr);
    while(!feof(p))
    {   tot += prod.pr;
        fscanf(p,"%d%f",&prod.cod,&prod.pr);
    }    printf("\nValor total em estoque: R$%.2f\n",tot);
    fclose(p);}
