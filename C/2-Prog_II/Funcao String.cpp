/*18. Escreva um programa completo que possui as funções:
a) int ultima (char *string, char c) 
que retorna a última posição na string em que aparece o caracter c.
char str[ ]=”teste”;
q = ultima(str, ‘t’);  q recebe 3 
b) int primeira(char *string, char c) 
que retorna a primeira posição na string em que aparece o caracter c..
char str[ ]=”teste”;
q=primeira(str, ‘e’); q recebe 1 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
int ultima(char *string, char caracter)
{ 
    int i;
    for(i=strlen(string);i>=0;i--)
    if(*(string+i)==caracter)
       return i;
    return -1;
    
}
int primeira(char *string, char caracter)
{
    int i;
    for(i=0;i<strlen(string);i++)
    if(*(string+i)==caracter)
        return i;
    
}
int main ()
{
    char string[51], caracter;
    int posicao, posicao2;
    
    printf("Insira a string: \n");
    gets(string);
    strupr(string);
    
    printf("Insira o caracter a ser buscado: \n"); 
	fflush(stdin);
    scanf("%c", &caracter); 
    caracter = (toupper(caracter));
    
    system("cls");
    
    posicao = ultima(string, caracter);
    posicao2 = primeira(string, caracter);
    
    if(posicao!=-1)
    {
      printf("A ultima posicao na string em que aparece o caracter %c: %d\n",caracter, posicao);
      printf("A primeira posicao na string em que aparece o caracter %c: %d\n",caracter, posicao2);
    }
    else
      printf("O caracter %c nao existe em %s\n", caracter, string);
    
    printf("\n\n");
    system("PAUSE");
    return 0;
}
