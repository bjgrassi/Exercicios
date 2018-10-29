#include <stdio.h>
#include <stdlib.h>

int main()
{ int divisao(int, int, int *), a, b, d, r;
  printf("Dividendo: ");
  scanf("%d", &a);
  
  do{
     printf("Divisor (diferente de zero): ");
     scanf("%d", &b);
     } while(b==0);
     
     d=divisao(a,b,&r);
     
     printf("Resultado: %d \n Resto: %d\n", d, r);
  
  system("pause");
  return 0;
}

int divisao(int a, int b, int *resto)
{ *resto = a%b;
  return (int)a/b;
  
}
