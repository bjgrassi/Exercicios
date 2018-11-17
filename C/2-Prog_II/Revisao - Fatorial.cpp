#include<stdio.h>
#include<stdlib.h>

int main ()
{   float E=1.0;
    int i, j, N, FAT=1;

    do{
        printf("Valor de N: ");
        scanf("%d", &N);
    } while(N<=0);
    
    for(i=1;i<=N;i++)
        FAT*=i;
      
    printf("\nFatorial: %d\n\n", FAT);
     
	system("PAUSE");
	     
	return 0;
}
    
