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

/*
int main ()
{   char ent[50], sai[50];
    int i, j=0;
      
      printf("Digite a frase: ");
      gets(ent);
      puts(ent);
      
      for(i=0;ent[i]!='\0';i++)
         if(!isspace(ent[i]))
          sai[j++]=ent[i];
          
          
      puts(sai);
      //quando sai do for o i e o j coincidem com o tamanho da string     
      printf("%d em entrada e %d em saida ", i,j);
      
system("PAUSE");

return 0;
} */
