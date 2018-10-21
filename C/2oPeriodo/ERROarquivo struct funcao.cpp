/*1.   struct produto
         { int codigo; char descricao[30]; float preco; };
O programa deve:
a) Declarar vetor com 50 produtos com o lay-out da estrutura;
b) Cadastrar os produtos
c) Reajustar os preços, com percentual informado pelo usuário;
d) Exibir a estrutura antes e depois do reajuste. */
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define tam 4
struct prod
    { int cod;
	  char desc[30];
	  float pr;
    } reg[tam];
    
void le(void), reaj(float),exibe(void),menu(void);
FILE *arq, *arq1;//declaracao de arquivo

int main()
{   menu();

    system("pause");    
	return 0;
}
void menu(void)
{   char opcao; 
	float perc;
    do
    { printf("\n L: Ler\n E: Exibir\n R: Reajustar\nS:Sair\n  -> ");
      fflush(stdin); 
	  scanf("%c",&opcao); opcao=toupper(opcao);
	  
      if (opcao == 'L')   le();
      else if (opcao=='E') exibe();
      else if (opcao == 'R')
            {   printf("\nPercentual de reajuste: ");
                scanf("%f",&perc);
                reaj(perc);
            }
    } while(opcao!='S');
}
void le (void)
{   if((arq=fopen("E:\\produtos.xls","w"))==NULL)
    {   perror("Impossivel abrir");//identifica o tipo de erro
        system("pause");
        exit(0);//fecha o programa e devolve o controle pro SO
    }
    fprintf(arq,"Codigo\tDescricao\tPreco\n");
    for(int i=0;i<tam;i++)
    {   printf("Codigo %d: ", i+1);
        scanf("%d",&reg[i].cod);
        printf("Descricao %d: ", i+1); fflush(stdin);
        gets(reg[i].desc);  
        printf("Preco %d: ", i+1);
        scanf("%f",&reg[i].pr); 
        //gravar dentro do arquivo produtos.xls
        fprintf(arq,"%d\t%s\t%.2f\n", reg[i].cod,reg[i].desc,reg[i].pr);
    }system("cls");//limpar a tela
    fclose(arq);
}
void exibe(void) 
{   for(int i=0;i<tam;i++)
       printf("%d: %s - R$%.2f\n", reg[i].cod,reg[i].desc,reg[i].pr); 
}
void reaj(float val) //LER de produto.xls e GRAVAR em reajustado.xls
{   if((arq = fopen("E:\\reajustado.xls","w"))==NULL)
    {  fprintf(arq,"%.2f\n",reg.pr);
       perror("Impossivel abrir"); system("pause"); exit(0); }
    if((arq1 = fopen("E:\\produtos.xls","r"))==NULL)
    {   perror("Impossivel abrir"); system("pause"); exit(0); }
    fscanf(arq1,"%d%s%f", &reg.cod,&reg.desc,&reg.pr);
    while(arq1 != EOF)
    {   fprintf(arq,"%d\t%s\t", reg.cod,reg.desc);
        reg.pr += reg.pr*val/100.0;
          fscanf(arq1,"%d%s%f", &reg.cod,&reg.desc,&reg.pr);
    }
    fclose(arq); 
    fclose(arq1);
}
