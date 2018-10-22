#include <string.h>
#include <iostream>

//Quantidade de caracteres repetidos q nao sejam vogais
//Ta dando algum erro...
int main ()
{
	char frase [80] ;
	int i=0, cont=0;
	
	printf("Escreva uma frase de ate 80 caracteres.\n");
	fflush(stdin);
	gets(frase);
	
	while(frase[i] != '\0')
	{	
		if ((frase[i] != 'a')||(frase[i] != 'e')||(frase[i] != 'i')||(frase[i] != 'o')||(frase[i] != 'u'))
			{
				if (frase[i]==frase[i+1]);
					cont = cont + 1;
			}
	
		i++;
	}
				
		
	printf("\nquantidade de caracteres repetidos: %d\n"), cont;
	
	system ("pause");
	return 0;
}


