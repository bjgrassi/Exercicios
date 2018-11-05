#include <string.h>
#include<stdio.h>
#include<stdlib.h>

int main ()
{
	char frase [80];
	int i=0, contVogais=0, contCon=0;
	
	printf("Escreva uma frase de ate 80 caracteres.\n");
	fflush(stdin);
	gets(frase);
	
	while(frase[i] != '\0')
	{	
		if (frase[i]==frase[i+1])
			if ((frase[i] != 'a')&&(frase[i] != 'e')&&(frase[i] != 'i')&&(frase[i] != 'o')&&(frase[i] != 'u')) 
				contCon = contCon + 1;
			else
				contVogais++;
			
		i++;
	}
				
		
	printf("\nQuantidade de CONSOANTES repetidas: %d \n", contCon);
	printf("Quantidade de VOGAIS repetidas: %d \n\n", contVogais);
	
	system ("pause");
	return 0;
}


