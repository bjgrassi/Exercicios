#include <stdio.h>
#include <iostream>

using namespace std;

int main ()
{ char opc;
  
  printf("Digite um caractere: \n");
  scanf("%c", &opc);
  
  if(isdigit(opc))
    printf("\nEh um Digito.\n");
    else
       if(isupper(opc))
         printf("\nLetra maiuscula.\n");
            else
            	if(islower(opc))
			        printf("\nLetra minuscula.\n");
			            else
			               if(isspace(opc))
			                  printf("\nEspaco.\n");
                  
                  
                  //ou
                  
   /* if(opc>='0' && opc<='9')
      printf("\nÉ um digito.");
        else
          if(opc>='A' && opc<='Z')
             printf("\nMaiuscula.");
               else
                 if(opc==' ')
                   printf ("\nEspaco."); */
     
system("PAUSE");
return 0;
}
