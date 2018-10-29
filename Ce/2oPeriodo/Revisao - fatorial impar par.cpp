#include<stdlib.h>
#include<stdio.h>

int main ()
{ int num, fat=1, i;

  printf("Insira um valor: ");
  scanf("%d", &num);
 
  for(i=num;i>=1;i--)
     fat*=i; //calculo fatorial
     
     (fat%2) ? printf("%d - Impar\n", fat) : printf("%d - Par\n", fat);
     //0 eh falso e os demais sao verdadeiros
     
	 /*for(i=num-1;i>1;i--) //nao entendi daqui pra baixo
       if(num%i==0)
          break;
       if(i==1) 
        printf("%d - Primo\n", i);
          else
              printf("%d - Nao primo\n", i);*/


    system("PAUSE");
return 0;
}
