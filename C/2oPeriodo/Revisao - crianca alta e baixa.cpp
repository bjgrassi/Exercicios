#include<stdio.h>
#include<stdlib.h>

int main ()
{   float bm,am, bc,ac;
    int tempo = 0;

    printf("Altura -metro- crian�a mais baixa: ");
    scanf("%f", &bm);
    printf("Altura -metro- crian�a mais alta: ");
    scanf("%f", &am);
    
    if (bm>am)
    	printf("A crian�a 'baixa' � mais alta\n");
        else
        { printf("Crese em cm/semestre - mais baixa: ");
          scanf("%f", &bc);
          printf("Cresce em cm/semetre - mais alta: ");
          scanf("%f", &ac);
               if(bc<=ac)
                 printf("A crian�a baixa nunca sera mais alta que a alta\n");
                     else
                        { bm*=100; am*=100;
                          while(bm<am)
                            {  bm+=bc; 
							 	am+=ac; 
								tempo++; 
							}
                            printf("\nFicara mais alta em %.1f anos\n",(float)tempo/2.0);
                        }
        }
     
	system("PAUSE");
	     
	return 0;
}
    
