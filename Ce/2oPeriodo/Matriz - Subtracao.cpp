#include<stdio.h>
#include<stdlib.h>

#define t 2
int main ()
{ int a[t][t], b[t][t];
  int i, j, flag=0;
  
  for(i=0; i<t; i++)
    { for(j=0; j<t; j++)
        {   
        printf("Digite o numero %d %d da matriz: ", i+1, j+1); //mat[%d][%d]
        scanf("%d", &a[i][j]);
        }
    }
    
  
    for(i=0; i<t; i++)
       for(j=0; j<t; j++)
               b[i][j]=a[i][j]-a[i][i];

   printf("\n ### A ###\n");
    for(i=0; i<t; i++)
       { printf("\n|");
          for(j=0; j<t; j++)
              printf("%4d", a[i][j]);
            printf("   |");
              }
              
   printf("\n\n ### B ###\n");
    for(i=0; i<t; i++)
       { printf("\n|");
          for(j=0; j<t; j++)
              printf("%4d", b[i][j]);
            printf("   |");
              }              
            
    printf("\n\n");        
  
  system("PAUSE");
  return 0;
}
