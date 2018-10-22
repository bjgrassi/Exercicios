#include <stdio.h>
#include <conio.h>
const int max=100;

//tirar os espacos da frase
int main()
{
    char ent[max],sai[max];
    int i=0,j=0,flag=0,content=0,contsai=0;
 
    printf("Informe a frase: \n");
    gets(ent);
 
 
    while(ent[i] != '\0') 
    {
        if(ent[i]!=' ') 
        {
            sai[j]=ent[i]; 
            j++;
        }
        i++; 
    }
 
	printf("Frase sem espaco: \"%s\".",sai);
 
    return 0;
}
