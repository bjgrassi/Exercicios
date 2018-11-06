#include<stdlib.h>
#include<stdio.h>

/*Escreva uma função divisao, que retorne a divisão inteira de dividendo por divisor e
armazena no parâmetro resto, passado por referência o resto da divisão. Construa um
programa utilizando esta função.
*/
int divisao (int dividendo, int divisor, int *resto)
{ 
	*resto=dividendo%divisor;
	
	return dividendo/divisor;
}

int main()
{	int divd, divs, resto;
	
	printf("Dividendo: "); scanf("%d", &divd);
	printf("Divisor: "); scanf("%d", &divs);
	
	int quociente = divisao(divd, divs, &resto);
	
	printf("\nResultado: %d\t Resto: %d\n", quociente, resto);
}
