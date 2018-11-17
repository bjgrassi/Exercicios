#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main ()
{   char str[81], let;
    int i;
      
      printf("Digite a frase: ");
      gets(str);
      strlwr(str);
      fflush(stdin);
      
      puts("Caracter: ");
      scanf("%c", &let);
      let=tolower(let);
      
      for(i=strlen(str); i>=0; i--)
        { 
            if(str[i]==let)
             { printf("'%c' aparece na %d posicao \n", let, i+1) ;
               break;
             }
        }
       
      if(i<0)   
      printf("'%c' nao aparece em '%s' \n", let, str);
      
system("PAUSE");

return 0;
}
