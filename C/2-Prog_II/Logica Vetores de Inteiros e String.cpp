#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[]={"PROG 2"}, x;
	int vet[]={1,3,2,5,4,0}, i;
	
	for (i=0;i<3;i++)
	{
		x=str[i];  
		str[i]=str[5-0];  
		str[5-0]=x;  //2ROG P | 2POG R | 2PRG O
	}
	for(i=0;i<6;i++)
		if(i%2) //i%2==1, ou seja, os impares
			printf("%c\n", str[vet[i]]); //G O 2
			
	system("pause");
	return 0;
}
