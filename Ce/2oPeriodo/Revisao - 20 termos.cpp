#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
//valor x e imprimir a os 20 primeiros termos, s=1/(x+1) + 1/(x+2)...
int main ()
{ int i;
  float x, soma=0.0;

    printf("Insira um valor: ");
    scanf("%f", &x);
    
    if((x<-20.0) || (x>=0)) //numeros fora de -20 e 0
    {
     for(i=1;i<=20;i++)
        soma+=1.0/(x+(float)(i));
        
        printf("%.1f\n",soma);
     }
      else
          printf("Valor invalido.");
    system("PAUSE");
return 0;
}

