/*Fa�a um programa que declara e carrega um vetor de 20 elementos inteiros 
na fun��o main. Em seguida exibir seu conte�do na exibe, seguindo o seguinte: 
se a soma dos valores for um n�mero par, mostrar o vetor a partir do primeiro
elemento at� o �ltimo, caso contr�rio, mostrar o vetor a partir do �ltimo elemento
at� o primeiro. O programa n�o pode utilizar nenhuma vari�vel global.*/
#include<stdio.h>
#include<stdlib.h>
void exibe(int *p)
{
    int i,soma=0;
    
    for(i=0;i<5;i++)
      soma += *(p+i);
    
    if(soma%2==0)
         for(i=0;i<5;i++)
             printf("%d\t", *(p+i));
    else
         for(i=4;i>=0;i--)
             printf("%d\t", *(p+i));
    

}
int main ()
{
    int vetor[5];
    int i;
    
    for(i=0;i<5;i++)
    {
      printf("Insira um numero: \n");
      scanf("%d", &vetor[i]);
    }
    system("cls");
    exibe(vetor);
    
    printf("\n\n");
    system("PAUSE");
    return 0;
}
