#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

int divid(void), divis(void), mod(int, int), divide(int, int);

int main()
{ int a, b;
  a=divis();
  
  while(a!=0)
  {   b=divid();
      printf("MOD = %d\n", mod(a,b));
      printf("DIV = %d\n", divide(a,b));
      a=divis();
  
  }
system("pause");
return 0;   
}


int divid(void)
{   int a;
    
    printf("Dividendo: ");
    scanf("%d", &a);
    
    return a;
}

int divis(void)
{   int a;
    
    printf("Divisor ou zero para encerrar: ");
    scanf("%d", &a);
    
    return a;
}

int mod(int a, int b)
{   return a%b;
}

int divide(int a, int b)
{   return a/b;
}
