#include<stdio.h> //Print, scanf
#include<stdlib.h> //system(pause)

int main ()
{ float salario, somaSalario = 0, maiorSalario = 0;
	int numfilhos, totalPessoas = 0, somafilhos = 0, cont350 = 0;
	
	printf ("Informe o salario ou 0 para sair ");
	scanf ("%f", &salario);
	
	while (salario > 0)
	{
		printf ("Informe o numero de filhos: ");
		scanf ("%d", &numfilhos);
		
		somaSalario += salario; 
		somafilhos += numfilhos;
		totalPessoas++;
		
		if (salario >= maiorSalario)
			maiorSalario = salario;
			
		if (salario <= 350)
			cont350++; //verificar quem tem salario menor ou igual a 350
			
		printf ("Informe o salario ou 0 para sair: ");
		scanf ("%f", &salario);
		
	}
	
	float mediaSalarial = somaSalario/totalPessoas;
	float perc = cont350*100/totalPessoas;
	float mediafilhos = somafilhos/totalPessoas;
	
	printf ("\n\nMaior salario = %.2f", maiorSalario);
	printf ("\nMedia salarial = %.2f", mediaSalarial);
	printf ("\nPercentual de pessoas que ganham 350,00 = %.2f", perc);
	printf ("\nMedia filhos = %.2f", mediafilhos);
	
	return 0;
    system ("pause");
}

