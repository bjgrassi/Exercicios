#include<stdio.h>
#include<stdlib.h>

/* RESULTADO DA TELA
3- 1
4- 0

2- 3
5- 0

1- 9
Press any key to continue . . .
*/

int x=1, y=2;
void xpto(void);

int main()
{
	int x=3, alfa(int, int);
	x=alfa(x,x); //
	printf("\n1- %d\n",x); //terceiro print: 1-1
	system ("pause");
	return 0;
}
int alfa(int x, int y) //1,1
{
	int z=0;
	xpto();
	printf("\n2- %d\n5- %d\n",x,z); //segundo print: 2-1 ' 5-0
	return x*y; //1*1 pq sao recebidos na funcao
}
void xpto(void)
{
	int x;
	int z=x++*4; //z=0; x=1 pq é o x declarado locamente
	printf("\n3- %d\n4- %d\n",x,z); //primeiro print: 3-1 ' 4-0
}
