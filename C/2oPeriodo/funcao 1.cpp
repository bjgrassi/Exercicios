#include<stdio.h>
#include<stdlib.h>
#include<math.h>
    
int fat(int, int);

int main()
{ int n, k;

	do{
	printf("Digite n: ");
	scanf("%d", &n);
	} while(n<=0);
	
	do{
	printf("Digite k, sendo menor q n: ");
	scanf("%d", &k);
	} while(k>=n);
	
	printf("O valor de A eh: %d ", fat(n,k));
	
  
system("pause");
return 0;   
}

int fat(int n, int k)
	{ int i, j, fat=1, divis=1, a, fat2=(n-k);
	
		for(i=1;i<=n;i++)
		    fat*=i;
      	
      	for(j=1;j<=fat2;j++)
            divis*=fat2;
            
        return fat/divis;
	}
