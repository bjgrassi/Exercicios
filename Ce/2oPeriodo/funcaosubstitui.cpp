/*19. Escrever uma função int substitui(char *string, char c1, char c2),
que troca, na string recebida como parâmetro, toda a ocorrência do caracter
c1 pelo caracter c2. A função deve retornar o número de substituições 
que foram feitas.
char txt[ ] = "recupera";
int num;
num = substitui(txt, 'e', 'X');
printf("%d - %s", num, txt); 2 - rXcupXra */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
int substitui(char *string, char c1, char c2)
{
    int i,cont=0;
    
      for(i=0;i<strlen(string);i++)
      if(*(string+i)==c1)
      {
         *(string+i)=c2;
         cont++;
      }
      return cont;
}
int main ()
{
    char string[51];
    char c1, c2;
    int quant;
    
    printf("Insira a string: \n");
    gets(string); strupr(string);
    
    printf("Insira um caracter para c1: \n"); fflush(stdin);
    scanf("%c", &c1); c1=toupper(c1);
    
    printf("Insira um caracter para c2: \n"); fflush(stdin);
    scanf("%c", &c2); c2=toupper(c2);
    
    system("cls");
    
    quant = substitui(string, c1, c2);
    
    if(quant!=0)
      printf("A quantidade de substituicoes: %d", quant);
    else
    printf("O caracter %c nao existe em %s\n", c1, string);
    
    printf("\n\nString: %s", string);
    
    printf("\n\n");
    system("PAUSE");
    return 0;
}
