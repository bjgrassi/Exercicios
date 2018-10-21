#include <stdio.h>
#include <string.h>
using namespace std;

//Correcao da frase com nb ou np EX: bonba
int main ()
{
    char frase [50], frase2[50];
    int i=0, j=0;
 
    printf("Digite uma frase: \n");
    scanf("%[^\n]s",&frase);
 
    strncpy(frase2,frase,strlen(frase));
 
    while (i<strlen(frase))
    {
        if (frase[i] == 'n')
        {
        	if((frase[i+1]=='b') || (frase[i+1]=='p')) {
                frase2[j]='m';
			}
        }
        i++;
        j++;
        
     }
 
    printf("\nFrase correta: %s\n", frase2);
 
    return 0;
}
