/*Escrever um programa que declara um vetor inteiro com 30 elementos na fun��o main. 
Em seguida, em uma fun��o chamada leitura, ler um valor maior que 0 e menor que 1000
para cada posi��o do vetor. Finalmente, em uma fun��o chamada calculo, deve ser 
impresso o maior e o menor valor armazenado no vetor. N�o pode ser declarada nenhuma 
vari�vel global.*/
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
