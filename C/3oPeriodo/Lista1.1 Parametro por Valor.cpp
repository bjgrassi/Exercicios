#include<stdio.h>
#include<stdlib.h>

/*Fa�a uma fun��o que retorne o valor em segundos correspondente aos valores passados por
par�metros (horas, minuto e segundos). Construa tamb�m um procedimento que utilize esta
fun��o. Qual a diferen�a de usarmos passagem de par�metro por valor e refer�ncia? Explique
detalhadamente e exemplificando com a fun��o constru�da. 
*/
int valorseg(int hor, int min, int seg)
{   
  min+=hor*60;
  seg+=min*60;
  
  
  return seg;
}

int main()
{ int hor, min, seg;

  printf("Insira a hora: ");
  scanf("%d", &hor);
  printf("Insira os min: ");
  scanf("%d", &min);
  printf("Insira os seg: ");
  scanf("%d", &seg);
  
  valorseg(hor, min, seg);
  
  printf("Horario em seg: %d", valorseg(hor, min, seg));
 
 system("pause"); 
  return 0;
}
  
