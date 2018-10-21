//1- Vetor de alunos e descobrir a média da turma, quantidade de reprovados e aprovados
// de acordo com a média
#include <iostream> //cout cin
using namespace std; //so roda com isso e o include juntos

int main ()
{
	const int ALUNOS=5;
	
	float notas [ALUNOS], media=0.0;
	int i, reprovados=0;
	 for (i=0;i<ALUNOS;i++){
	  	printf ("Digite a nota do aluno %d \n", i+1);
	  	cin >> notas[i];
	  	media = media + notas [i];
	}
	media = media/ALUNOS;
	 for (i=0;i<ALUNOS;i++){
	 	if (notas[i]< media){
	 		reprovados++;
			}
	 }
	 
	 printf ("\n\nMedia da turma = %.1f \n", media);
	 printf ("Quantidade de alunos abaixo da media da turma = %d \n", reprovados);
	 printf ("Quantidade de alunos acima ou igual a media da turma = %d\n", (ALUNOS - reprovados));
	 return 0;
}

