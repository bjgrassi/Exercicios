//10- Ver quantas vogais, espacos e outros caracteres

#include <conio.h>
#include <iostream>

int main ()
{
	char frase [40] ;
	int vogais=0, brancos=0, resto=0, i=0;
	
	printf("Escreva uma frase de ate 40 caracteres.\n");
	gets(frase);
	
	while(frase[i]!= '\0')
	{	
		if ((frase[i] == 'a')||(frase[i] == 'e')||(frase[i] == 'i')||(frase[i] == 'o')||(frase[i] == 'u'))
			vogais++;
			else
				if (frase[i] == ' ')
					brancos++;
				else
					resto++;
		i++;
	}
		
	printf("\n%d vogais\n",vogais);
	printf("%d espacos\n",brancos);
	printf("%d outros caracteres\n",resto);
	
	return 0;
}
