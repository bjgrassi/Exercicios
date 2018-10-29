#include<stdio.h> //Print, scanf
#include<stdlib.h> //system(pause)
#include<string.h>

int main ()
{ 	int homem=0, mulher=0;
	float altura, maior = 0, menor = 4.00, somaAlturaF = 0;
	char sexo;
	
	for (int i=0; i<3; i++)
	{
	 	printf ("Digite a altura %d: ", i+1);
	 	scanf ("%f", &altura);
	 	printf ("Digite f ou m para o sexo %d: ", i+1);
	 	fflush(stdin);
	 	scanf("%c", &sexo);
	 	
 		if (altura > maior)
 			maior = altura;
 			
 		if (altura < menor)
 			menor = altura;
	
	 	if ((sexo=='f') || (sexo=='F')) {
	 		somaAlturaF = somaAlturaF + altura;
	 		mulher++;
		 }
		 
		if ((sexo=='m') || (sexo=='M'))
			homem++;
	}
		
	printf ("\n\nA maior altura do grupo: %.2fm", maior);
	printf ("\nA menor altura do grupo: %.2fm", menor);
	printf ("\nMedia de altura das mulheres: %.2fm", somaAlturaF/mulher);
	printf ("\nO numero de homens: %d", homem);
	printf ("\n\n");

	system ("PAUSE");
	return 0;
}
