#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main ()
{   char pal[50];
    int i, num=0;
    
    printf("Digite a frase: ");
    gets(pal);
    
    
    for(i=0;i<strlen(pal);i++)
      { if(isdigit(pal[i])) // if(pal[i]<='0' && pal[i]>='9')
          num++;
      }
      
      printf("%d Num de digitos em %s ", num,pal);
      
system("PAUSE");

return 0;
}
       
       
       
