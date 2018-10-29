#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{ 
	char a[8] = { 'p', 'e', 'i', 'i', 'm', 'r', 'a', 'r'};
	int b[8] = { 5, 3, 4, 7, 1, 2, -1, 6};
	int i=0;
	
	while (i >= 0){
		printf(" %c",a[i]);
		i = b[i];
	}
    printf(" ");
    
	system("PAUSE");
	return 0;
}
