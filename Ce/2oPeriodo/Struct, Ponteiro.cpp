#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	struct pessoa {
	char nome[35];
	int idade;
	float peso;
	};
	
	struct pessoa reg = {"Fulano", 10, 50.5};
	int var=0, *p;
	char c, linha[15] = "Beltrano";
	
	p = &var; //endereco de var
	var = strlen(reg.nome); 
	printf ("Tamanho: %d\n", var++);
	
	var /= 2; //3
	c = reg.nome[++var]; //posicao 4 de ++var
	printf ("Letra: %c\n", c);
	
	*p=(strcmp(linha,reg.nome)!=0)? sizeof(linha) : strlen(linha);
	//se forem diferentes, exiba o tamanho de linha(15); iguais é tamnho da string(8)
	printf("Tamanho: %d\n", - -var);
	
	reg.peso += *p; //15 + 50.5
	printf("Novo Peso: %.2f\n", reg.peso);
	
	for(var=0; linha[var]!='\0';var++)
		reg.idade = reg.idade - 1; //10-8 = 2
	printf("Nova idade: %d\n", reg.idade);

	system("pause");
	return 0;
}
