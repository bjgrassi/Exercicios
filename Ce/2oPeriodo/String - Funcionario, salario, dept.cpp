#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define T 3
int main ()
{   char nome[3][51], dept[3][21];
    int i, j;
    float sal[3];
    
    for(i=0;i<3;i++){
      printf("Nome: "); fflush(stdin);
      gets(nome[i]);
      printf("Salario: ");
      scanf("%f", &sal[i]); 
      printf("Departamento: "); fflush(stdin);
      gets(dept[i]); 
      strupr(nome[i]); 
      strupr(dept[i]);
      
      }
            
     for(int i=0;i<3;i++){
     if(!strcmp(dept[i], "TESOURARIA")) //é pra encontrar. se iguais retorna a 0 ou tira o ! e coloca (()==0)
      printf(" \n Depto: %s\n", dept[i]);
       if(sal[i]<=2000.0 && sal[i]>=1300.0)
              printf("\nSalario: R$%.2f \n Nome: %s\n", sal[i], nome[i]);
              }   
     
system("PAUSE");
     
return 0;
}
    
