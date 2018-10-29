#include<stdio.h>
#include<stdlib.h>
#define tam 1

struct produto
{
       int codigo;
       char descricao[30];
       float preco;
}reg[tam];

int main()
{
    int i;
    float reaj;
    
    for(i=0;i<tam;i++)
    {  printf("Codigo do produto %d: ", i+1);
       scanf("%d", &reg[i].codigo);
       printf("Descricao do produto %d: ", i+1); fflush(stdin);
       gets(reg[i].descricao);
       printf("preco do produto %d: ", i+1);
       scanf("%f", &reg[i].preco);
       }
       
    for(i=0;i<tam;i++)
       printf("%d: %s - R$%.2f\n",reg[i].codigo,reg[i].descricao,reg[i].preco);               
                   
       printf("\nReajuste percentual: ");
       scanf("%f", &reaj);
       
      for(i=0;i<tam;i++){
       reg[i].preco+=reg[i].preco*reaj/100.0;
       printf("%d: %s - R$%.2f\n",reg[i].codigo,reg[i].descricao,reg[i].preco); 
      }
       
system("pause");

return 0;
}
