#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main ()
{
	char frase[151];
	int i;
	
	printf("Digite: ");
	fflush(stdin);
	gets(frase);
	
	printf("\n");
	
//	for(i=0;i<=strlen(frase);i++)
	while(frase[i]!='\0')
	{
		printf("%c", frase[i]);
		if((frase[i]=='.')||(frase[i]==',') || (frase[i]==' '))
		{ 	
			printf("\n");
		}
		i++;
	} 
	
	printf("\n");
	system("pause");
	return 0;
}
