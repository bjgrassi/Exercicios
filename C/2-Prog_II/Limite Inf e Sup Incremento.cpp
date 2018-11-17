#include<stdio.h>
#include<stdlib.h>

int main ()
{   int li,ls,inc,i;

    printf("Digite limite inferior: ");
    scanf("%d", &li);
    printf("Digite limite superior: ");
    scanf("%d", &ls);
    if (ls<li)
    { i=li;li=ls;ls=i; }
    
    do{
           printf("Digite o incremento maior que zero: ");
           scanf("%d", &inc);
    } while (inc<=0);

  for(i=li;i<=ls;i+=inc)
     printf("%d\t", i);
     
system("PAUSE");
     
return 0;
}
    
