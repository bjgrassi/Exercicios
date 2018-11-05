#include<stdio.h>
#include<stdlib.h>

/*8-Elabore uma fun��o que receba 2 n�meros inteiros a e b e um caracter c. A fun��o deve
imprimir uma "moldura" de tamanho a x b, feita usando um caracter c e devolver o n�mero de
caracteres impressos. O programa deve executar a fun��o e imprimir seu valor de retorno.


OBS: a impressao so fica correta se a=b. Nao tem gest�o para valores diferentes*/

void moldura(int a, int b, char c){
	int i, cont=2;
		
	printf("\n");
	for(i=1;i<=a;i++)
		printf("%c", c);
	
	while(cont<b){
		printf("\n%c", c);
		for(i=1;i<=b-2;i++)
			printf(" ");
		
		printf("%c", c);
		cont++;
	}
	
	printf("\n");
	for(i=1;i<=a;i++)
		printf("%c", c);
	printf("\n");
	
}

int main(){
	int a, b; char c;
	
	printf("Insira o 1o numero: ");
	scanf("%d", &a);
	printf("Insira o 2o numero: ");
	scanf("%d", &b);
	printf("Insira o caractere: ");
	fflush(stdin);
	scanf("%c", &c);
	
	moldura(a, b, c);
}
