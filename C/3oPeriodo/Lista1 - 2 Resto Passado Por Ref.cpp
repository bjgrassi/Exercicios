#include<stdlib.h>
#include<stdio.h>

/*Escreva uma fun��o divisao, que retorne a divis�o inteira de dividendo por divisor e
armazena no par�metro resto, passado por refer�ncia o resto da divis�o. Construa um
programa utilizando esta fun��o.
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
