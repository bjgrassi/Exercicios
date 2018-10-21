//9- Printar a frase

#include <conio.h>
#include <iostream>

int main ()
{
	char frase [40] ;
	printf("Escreva uma frase de ate 40 caracteres.\n");
	gets(frase);
	
	printf ("\nFrase: %s", frase);
	
	return 0;
}
