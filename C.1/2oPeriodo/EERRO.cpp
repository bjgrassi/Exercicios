#include<stdio.h>
#include<stdlib.h>

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
	var = strlen (reg.nome); 
	printf ("%d\n", var++);
	
	var /= 2;
	c = reg.nome[++var];
	printf ("%c\n", c);
	
	*p=(strcmp(linha,reg.nome)!=0)? sizeof(linha) : strlen(linha);
	printf("%d\n", - -var);
	
	reg.peso += *p;
	printf("%f\n", reg.peso);
	for(var=0; linha[var]!='\0';var++)
	reg.idade = reg.idade - 1;
	printf("%d\n", reg.idade);

	system("pause");
	return 0;
}
