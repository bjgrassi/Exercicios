#include<stdio.h>
#include<stdlib.h>

/*7-Faça uma função que receba um valor inteiro e positivo, calcule e retorne o seu fatorial.
Construa um programa que utilize essa função. Como seria implementada essa função
recursivamente?*/ 

int fatorial(int valor){
	int fat=1, i;
	
		for(i=valor;i>0;i--){
			fat=fat*valor;
		}
		
	return fat;
}

//Recursivo

int fatRecursivo(int NR)
{
	if (NR > 1)
		return (NR * fatRecursivo(NR-1));
	else
		return 1;

}

int main(){
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	printf("\nResultado: %d\n", fatRecursivo(num));
system("pause");
return 0;
}
