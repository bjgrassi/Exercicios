#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main ()
{   char str[51], let;
    int i, tot=0;
      
      printf("Digite a frase: ");
      gets(str);
      strupr(str);
      
      for(let='A';let<='Z';let++)
        { for(i=0;str[i]!='\0';i++)
            if(str[i]==let)
             { tot++;
               break;
             }
        }
          
      printf("%s tem %d letras distintas ", str,tot);
      
system("PAUSE");

return 0;
}
       
       
       
