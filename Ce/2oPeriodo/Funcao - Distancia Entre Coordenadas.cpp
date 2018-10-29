#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float ponto(float, float, float, float);     

int main()
{ float x1, y1, x2, y2;

  printf("Coordenada x do ponto 1: ");
  scanf("%f", &x1);
  printf("Coordenada y do ponto 1: ");
  scanf("%f", &y1);
  printf("Coordenada x do ponto 2: ");
  scanf("%f", &x2);
  printf("Coordenada y do ponto 2: ");
  scanf("%f", &y2);
  printf("Distancia entre os dois pontos = %.2f\n", ponto(x1,y1,x2,y2));
  
system("pause");
return 0;   
}
       
float ponto(float x1, float y1, float x2, float y2)       
{ float dx, dy;
  dx = x2-x1;
  dy = y2-y1;
  return (pow(dx,2)-pow(dy,2))/2.0;
}
       //ivis*=(n-k);
