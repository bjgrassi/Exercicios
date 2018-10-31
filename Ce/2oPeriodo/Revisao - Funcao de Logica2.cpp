#include<stdio.h> //Print, scanf
#include<stdlib.h> //system(pause)
#include<string.h>

/* Print na tela:
3 - 4
2 - 4
3 - 4
2 - 5
1 - 8
Press any key to continue . . .
*/

int x=1, y=2;
void passo1 (void);
int main ()
{   int x=1, passo2(int, int);
    x=passo2(x,x); //2
    x+=passo2(y,x); //6 + 2
    printf("\n1 - %d\n", x); //quinto print: 1 - 8
     
	system("PAUSE");
	return 0;
}

int passo2(int x, int y) //1, 1 | 1, 2
{
	int z=3;
	passo1(); //primeiro print: 3 - 4 | terceiro print: 3 - 4
	z+=x++; // 3+1=4; x=2 | 3+2=5; x=3
	printf("\n2 - %d", z); //segundo print: 2 - 4 | quarto print: 2 - 5
	return x*y; //return 2*1=2 | return 3*2
}

void passo1(void)
{
	int z;
	z=x*4;
	printf("\n3 - %d", z);
}
