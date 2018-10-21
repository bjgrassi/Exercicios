#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[]={"PROG 2"}, x;
	int vet[]={1,3,2,5,4,0}, i;
	
	for (i=0;i<3;i++)
	{
		x=str[i];
		str[i]=str[5-0];
		str[5-0]=x;
	}
	for(i=0;i<6;i++)
		if(i%2)
			printf("%c\n", str[vet[i]]);
			
	system("pause");
	return 0;
}
