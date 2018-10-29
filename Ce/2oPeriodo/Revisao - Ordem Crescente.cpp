#include<stdlib.h>
#include<stdio.h>

int main ()
{ float ma, me, a, b, c;

  printf("Insira o 3 valores: ");
  scanf("%f%f%f", &a, &b, &c);
  
  ma=(a>b)?a:b;
  me=(a<b)?a:b;
  if(c<me)
  printf("%.1f\n%.1f\n%.1f\n", c,me,ma);
    else
        if(c>ma)
          printf("%.1f\n%.1f\n%.1f\n", me,ma,c);
          else
              printf("%.1f\n%.1f\n%.1f\n", me,c,ma);
              
    system("PAUSE");
return 0;
}
