#include<stdio.h>
#include<stdlib.h>

/*Faça uma função que retorne o valor em segundos correspondente aos valores passados por
parâmetros (horas, minuto e segundos). Construa também um procedimento que utilize esta
função. Qual a diferença de usarmos passagem de parâmetro por valor e referência? Explique
detalhadamente e exemplificando com a função construída. 
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
  
