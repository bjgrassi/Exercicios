/*Insira o num maior q 10: 123
Rodada 1: 0
Rodada 1: 3
Rodada 1: 12

Rodada 2: 30
Rodada 2: 32
Rodada 2: 1

Rodada 3: 32 e 1
*/

#include<stdio.h>
#include<stdlib.h>
int i=0;
int altera (int num, int inv) //123, 0 --- 12, 3 --- 1, 32
{ 
	if(num<10){ 
		printf ("Rodada %d: %d e %d\n", i+1, inv, num);
		return (num+inv*10);}
		else
			inv*=10; //0 --- 30
			printf ("Rodada %d: %d\n", i+1, inv);
			inv+=(num%10); //3 --- 32
			printf ("Rodada %d: %d\n", i+1, inv);
			num/=10; //12 --- 1
			printf ("Rodada %d: %d\n\n", i+1, num);
			i++;
			return(altera(num, inv)); //
}

int main()
{
	int num, inv=0;
	
	printf("Insira o num maior q 10: "); scanf("%d", &num);
	printf("Num invertido: %d\n", altera(num, inv));
	
	system("pause");
	return 0;
}
