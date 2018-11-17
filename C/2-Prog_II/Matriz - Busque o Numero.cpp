#include<stdio.h>
#include<stdlib.h>

#define max 2
int main ()
{ int mat[max][max], posi[max][max], num;
  int i, j, flag=0;
  
  for(i=0; i<max; i++)
    { for(j=0; j<max; j++)
        {   
        printf("Digite o numero %d %d da matriz: ", i+1, j+1); //mat[%d][%d]
        scanf("%d", &mat[i][j]);
        }
    }
    
    printf("Digite o numero a ser buscado: ");
    scanf("%d", &num);
    
    for(i=0; i<max; i++)
       for(j=0; j<max; j++)
            if(num == mat[i][j])
              { printf("Posicao do numero %d: linha %d e coluna %d ", num, i+1, j+1);
                flag=1;
              }
              if(flag==0)
              printf("esse numero nao existe na matriz ");
            
            
            
  
  
  system("PAUSE");
  return 0;
}
