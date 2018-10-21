#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main ()
{
	char frase[151], frase2[151];
	int i;
	
	printf("Digite: ");
	gets(frase);
	
/*	for(i=0;i<=strlen(frase);i++)
	{
		if((frase[i]==' ') || (frase[i]=='.') || (frase[i]==','))
		{
			printf("\n");
			i++;
		}
		frase2[i]=frase[i];
	}

	puts(frase2);*/
	
	while(frase[i]!='\0')
	{
		if((frase[i]=='.')||(frase[i]==',') || (frase[i]==' '))
		{ 	
			printf("\n");
			i++;
		}
		frase2[i]=frase[i];
	} 
	
	puts(frase2);	
	system("pause");
	return 0;
}
