#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main ()
{ char str[81];
  int i, pares=0;
  
  printf("Digite string: ");
  gets(str);
  strlwr(str); //conversao minusculo
  fflush(stdin);
  
  for(i=0;i<strlen(str);i++) //ou for(i=0;str[i]!='\0';i++)
    { if ((str[i]=='r')&(str[i+1]=='r') || (str[i]=='s') & (str[i+1]=='s'))
    	pares++;
    }
    
    printf("\n");
    puts(str);
    printf("%d pares de rr/ss \n", pares);
    
    
system("PAUSE");
return 0;
}
