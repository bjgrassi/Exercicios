#include<stdio.h>
#include<stdlib.h>

#define t 2

#define fi for(i=0;i<t;i++)
#define fj for(j=0;j<t;j++)

int main ()
{ int mat[t][t], somaLinha[t]={0}, somaColuna[t]={0};
  int i, j;
  
  fi {
    fj
        {   
        printf("Digite o elemento mat[%d][%d]: ", i+1, j+1);
        scanf("%d", &mat[i][j]);
        somaLinha[i] += mat[i][j];
        somaColuna[j] += mat[i][j];
        }
    }
        
    printf("\nSoma vetor linha:\n");
    fi //for(i=0;i<t;i++)   
    printf("%6d ", somaLinha[i]);
    
    printf("\nSoma vetor coluna:\n");
    fi //for(i=0;i<t;i++)
    printf("%6d ", somaColuna[i]);
             
	printf("\n\n");
  
  system("PAUSE");
  return 0;
}
