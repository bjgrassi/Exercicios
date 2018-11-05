#include<stdio.h>
#include<stdlib.h>

/*Faça uma função que retorne o valor em segundos correspondente aos valores passados por
parâmetros (horas, minuto e segundos). Construa também um procedimento que utilize esta
função. Qual a diferença de usarmos passagem de parâmetro por valor e referência? Explique
detalhadamente e exemplificando com a função construída. 
*/
int seg(int h, int m, int *s){
	*s=*s+(m*60);
	*s=*s+(h*60*60);
	return s;
}

int refseg(int *vet)
{   int segs;

	segs=vet[0]*60;
	segs+=vet[1]*60;
	segs+=vet[2];
	
	return segs;
}

int main()
{ int hor, min, seg;
  int vet[]={hor, min, seg};

  printf("Insira a hora: ");
  scanf("%d", &hor);
  printf("Insira os min: ");
  scanf("%d", &min);
  printf("Insira os seg: ");
  scanf("%d", &seg);
  
  int segs=refseg(vet);
  printf("Horario em seg: %d", segs);
 
 system("pause"); 
  return 0;
}
  
