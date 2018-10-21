#include<stdio.h> //Print, scanf
#include<stdlib.h> //system(pause)

//Esta dando erro na hora de digitar o sexo

int main ()
{ 	int homem, mulher, i;
	float altura, maior = 0, menor = 4.00, somaAlturaF = 0;
	char sexo;
	
	for (i=1;i<=3;i++)
	{
	 	printf ("Digite a altura: ");
	 	scanf ("%f", &altura);
	 	printf ("\nDigite f ou m para o sexo: ");
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
	
	float mediaF = somaAlturaF*100/mulher;	
	
	printf ("\n\nA maior altura do grupo: %.2f", maior);
	printf ("\nA menor altura do grupo: %.2f", menor);
	printf ("\nMedia de altura das mulheres: %.2f", mediaF);
	printf ("\nO numero de homens: %.2f", homem);
	printf ("\n\n");

	system ("PAUSE");
	
	return 0;
}
