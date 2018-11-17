#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define T 3
int main ()
{	float x, y, kmx, kmy;

	printf("Tanque Alfa: ");
	scanf("%f", &x);
	printf("Tanque Beta: ");
	scanf("%f", &y);
	
	kmx = x/4.5;
	kmy = y/4.9;
	
	if(kmx == kmy)
	  printf("Param ao mesmo tempo\n");
	    else
	    	if(kmx>kmy)
	    	   printf("Beta para\n");
	    	   	else
	    	    	if(kmx<kmy)
	    	   		printf("Alfa para\n");
system("PAUSE");
     
return 0;
}
