#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{ int potencia (int, int), base, exp;

  do{
  printf("Insira valor positivo p base: ");
  scanf("%d", &base);
  }while(base<0);
  
   do{
  printf("Valor positivo expoente: ");
  scanf("%d", &exp);
  }while(exp<0);
  
  printf("potencia: %d\n", potencia(base,exp));
  system("pause");
  return 0;
}

    int potencia (int a, int b)
{    return pow(a,b);
}
