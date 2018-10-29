#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define T 3
int main ()
{   char string[61];
    int i;
    
    printf("Texto: ");
    gets(string); strupr(string);
    
    puts(string);
    for(i=0;i<=strlen(string);i++)
    {  printf("%c", string[i]); //printf("%c%c", string[i], string[i],); -- nao precisa do if
         if(string[i]!=' ')
           printf("%c", string[i]);
           }
           
           printf("\n");
     
system("PAUSE");
     
return 0;
}
    
