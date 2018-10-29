#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//extra - funcoes que: somem 2 valoeres e dividem 2 valores. valores lidos na 
//leitura. o resultado da soma e da divisao sera apresentado na main 

int a,b, soma(void);
float divide(void);
void leitura(void);

int main()
{   leitura();
    printf("%d\n", soma());
    
    if(b!=0)
      printf("%.1f\n", divide());
      system("pause");
      return 0;
}
void leitura(void)
{    printf("Digite valor para a: ");
     scanf("%d", &a);
     printf("Digite valor para b: ");
     scanf("%d", &b);
}
int soma(void)
{ return a+b; }
float divide(void)
{ return (float)a/(float)b; }
