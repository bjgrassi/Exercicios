/*1.   struct produto
         { int codigo; char descricao[30]; float preco; };
O programa deve:
a) Declarar vetor com 50 produtos com o lay-out da estrutura;
b) Cadastrar os produtos
c) Reajustar os preços, com percentual informado pelo usuário;
d) Exibir a estrutura antes e depois do reajuste. */
#include<stdio.h>
#include<stdlib.h>
#define tam 2
struct prod
    { int cod;  char desc[30];    float pr;
    } reg[tam];
void le(void), reaj(float),exibe(void);
int main()
{   float perc;
    le( );
    printf("Antes do reajuste\n");   exibe( );
    printf("\nPercentual de reajuste: "); scanf("%f",&perc);
    reaj(perc);
    printf("\nApos o reajuste\n");
    exibe( );    
    system("pause");
    return 0;
}
void le (void)
{   for(int i=0;i<tam;i++)
    {   printf("Codigo %d: ", i+1);
        scanf("%d",&reg[i].cod);
        printf("Descricao %d: ", i+1); fflush(stdin);
        gets(reg[i].desc);  
        printf("Preco %d: ", i+1);
        scanf("%f",&reg[i].pr); 
    }system("cls");//limpar a tela
}
void exibe(void) 
{   for(int i=0;i<tam;i++)
       printf("%d: %s - R$%.2f\n", reg[i].cod,reg[i].desc,reg[i].pr); 
}
void reaj(float val) 
{  for(int i=0;i<tam;i++)
       reg[i].pr += (reg[i].pr * val/100.0);  
}