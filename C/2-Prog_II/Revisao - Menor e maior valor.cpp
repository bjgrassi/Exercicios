#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main ()
{ float num, ma=0, me=9999;
  
  char opcao;
 
    printf("Digite S ou N pra continuar: \n"); fflush(stdin);
    scanf("%c", &opcao);
 
  while(opcao == 's' || opcao == 'S')
  { printf("Informe um valor: \n");
    scanf("%f", &num);
    
    if(num > ma)
         ma = num;
    
    if(num < me)
         me = num;
    
    
    printf("Digite S ou N pra contunuar: \n"); fflush(stdin);
    scanf("%c", &opcao);  

   }

   printf("Maior = %1.f", ma);
   printf("\n\nMenor = %1.f", me);
    
system("PAUSE");
return 0;
}
