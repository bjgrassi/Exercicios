/*Escrever um programa que declara um vetor inteiro com 30 elementos na função main. 
Em seguida, em uma função chamada leitura, ler um valor maior que 0 e menor que 1000
para cada posição do vetor. Finalmente, em uma função chamada calculo, deve ser 
impresso o maior e o menor valor armazenado no vetor. Não pode ser declarada nenhuma 
variável global.*/
#include<stdio.h>
#include<stdlib.h>
void leitura(int *p)
{
     int i;
     for(i=0;i<5;i++)
     {
        do{
           printf("Insira um numero: \n");
           scanf("%d", p+i );  
        }while(*(p+i)<0 || *(p+i)>1000); 
             
     }  
     system("cls");
}
void calculo(int *p)
{
     int i, maior=0, menor=1000;
      for(i=0;i<5;i++)
     {
        if(*(p+i)>maior)
        {
           maior=*(p+i);
        }
        if(*(p+i)<menor)
        {
           menor=*(p+i); 
        }          
     } 
     
     printf("O maior valor: %d\n", maior);
     printf("O menor valor: %d\n", menor);
}
int main ()
{
    int vetor[5];
    leitura(vetor);
    calculo(vetor);
    
    printf("\n\n");
    system("PAUSE");
    return 0;
}

/*
#define tam 5
int main()
{ int vet[tam];
  void le(int*), busca(int*);
  le(vet);
  busca(vet);
  
  system("pause");
  return 0;
}

void le(int *pv)
{ printf("Valor entre 0 e 1000\n");
  for(int i=0;i<tam;i++)
    do{ 
        printf("Digite o %do numero do vetor: ", i+1);
        scanf("%d", pv+i);
    }while((*(pv+i))<0 || (*(pv+i))>1000);
}

void busca(int *pv)
{ int maior=-1, menor=1001;
  for(int i=0; i<tam; i++)
    { if((*(pv+i)) > maior)
        maior = *(pv+i);
      if((*(pv+i))<menor)
        menor = *(pv+i);
      }
      printf("Maior = %d\n Menor:%d\n", maior,menor);
} */ 
