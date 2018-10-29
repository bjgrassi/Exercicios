#include<stdio.h>
#include<stdlib.h>

#define t1 4
#define t2 4
int main ()
{ int a[t1], b[t2], c[t1+t2], achou;
  int i, j, k=0;
      
      for(i=0; i<t1; i++) {
      printf("Elemento %d do vet a: ", i);
      scanf("%d", &a[i]);
      }
      
      for(i=0; i<t2; i++){
      printf("Elemento %d do vet b: ", i);
      scanf("%d", &b[i]);
      }
      
      for(i=0; i<t1; i++) //procurando a em b
         { achou=0;
           for(j=0; j<t2; j++)
            { if(a[i]==b[j])
                { achou=1;
                  break;
                }
            }
                  if(achou==0)
                     { c[k]=a[i];
                       k++;
                     }
         }
         
      for(j=0;j<t2;j++)  //procurando b em a
      {  for(i=0;i<t1;i++)
            if(a[i]==b[j])
              break;
                          
              if(i==t1)
              c[k++]=b[j];
      }
       
      for(i=0,printf("Vetor A: \n");i<t1;i++)
         printf("%5d", a[i]);       
      
      for(i=0,printf("\nVetor B: \n");i<t1;i++)
         printf("%5d", b[i]); 
         
      for(i=0,printf("\nVetor C: \n");i<t1;i++)
         printf("%5d", c[i]); 
    
system("PAUSE");
return 0;
}
