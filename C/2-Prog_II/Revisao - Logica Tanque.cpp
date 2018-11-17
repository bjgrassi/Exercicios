#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main ()
{ float x, y, x1, x2, y1, y2;
  int tempo=0; 
  
  do
  { printf("Litros no tanque A: ");
    scanf("%f", &x);
  } 
  while(x<=0);
  do
  { printf("Litros no tanque B: ");
    scanf("%f", &y);
  } 
  while (y<=0);
  do
  { printf("Entrada em A em litros por hora: ");
  scanf("%f", &x1);
  } 
  while(x1<=0);
  do
  { printf("Saida em A em litros por hora: ");
  scanf("%f", &x2);
  } 
  while(x2<=0);
    do
  { printf("Entrada em B em litros por hora: ");
  scanf("%f", &y1);
  } 
  while(y1<=0);
  do
  { printf("Saida em B em litros por hora: ");
  scanf("%f", &y2);
  } 
  while(y2<=0);
  
  //hora pra min da quantidade de litros
  x1/= 60.0;
  y1/= 60.0;
  
  
  if((x1>=x2)||(y1>=y2))
        printf("Tanque A ou B nunca esvaziam!\n ");
        else
            { //soma a entrada e subtrai a saida em cada unidade de tempo
              while(x>0 && y>0)
                        { x+=x1-x2; y+=y1-y2; tempo++; }
                        if((x<=0)&&(y<=0))
                           printf("Juntos em %.1f horas\n",(float)tempo/60.0);
                        else
                            if(x<0)
                                   printf("Tanque A em %.2f horas\n",(float)tempo/60.0);
                            else
                                   printf("Tanque B em %.2f horas\n",(float)tempo/60.0);
            }

    
system("PAUSE");
return 0;
}

