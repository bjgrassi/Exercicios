#include <stdio.h>
#include <string.h>
const int max=100;

//Remover os espacos
int main()
{
    char ent[max],sai[max];
    int i=0,j=0,flag=0,content=0,contsai=0;
 
    printf("Informe a frase: \n");
    scanf("%[^\n]s",&ent);
 
    //strncpy(sai,ent,strlen(ent)); 
 
    while(i<=strlen(ent)) 
    {
        if(ent[i]!=' ') 
        {
            sai[j]=ent[i]; 
            j++;
        }

        i++; 
    }
 
    for(i=0;i<strlen(ent);i++)
    {
        content++; 
    }
 
    for(i=0;i<strlen(sai);i++)
    {
        contsai++; 
    }
 
    printf("\nA string \"%s\" tem %d caracteres.",ent,content);
    printf("\nA string \"%s\" tem %d caracteres.\n",sai,contsai);
 
    return 0;
}
