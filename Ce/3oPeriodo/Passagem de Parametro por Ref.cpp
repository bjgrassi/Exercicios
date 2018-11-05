#include<stdio.h>
#include<stdlib.h>
void PROC2006(int * ALFA, bool * BETA)
{
	*ALFA = 1900;
	*BETA = true;
}

int main()
{
	int NR, saida;
	bool VF;
	
	NR = 2000;
	VF = false;
	
	PROC2006(&NR,&VF);
	
	if (VF)
		saida = 2007;
	else
		saida = 2008;
		
	printf ("\n%d %d %d\n",NR,VF,saida);
	system("pause");
	return 0;
}
