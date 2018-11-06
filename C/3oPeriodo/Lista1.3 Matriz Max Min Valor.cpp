#include<stdio.h>
#include<stdlib.h>

/*Faça um procedimento chamado MinMaxLin. Esse procedimento deve escrever na tela o número
mínimo e máximo de uma determinada linha (passada por parâmetro) de uma matriz de inteiros
passada por parâmetro. Construa um programa que utilize tal procedimento. */

#define tam 3
void MinMaxLin (int linha, int mat[][tam]){
	int min=mat[linha-1][0], max=mat[linha-1][0];
	int j;
		
		for(j=0;j<tam;j++)
		  {
		if (mat[linha-1][j]<min)
			 min=mat[linha-1][j];
			 
		if (mat[linha-1][j]>max)
			max=mat[linha-1][j];
		  }
	printf("Min: %d \t\t Max: %d", min, max);	
}

int main(){
	int i, j;
	int mat[tam][tam], lin;
		
		for(i=0;i<tam;i++){
			for(j=0;j<tam;j++){
				printf("Matriz[%d][%d]: ", i+1, j+1);
				scanf("%d", &mat[i][j]);
			}
		}
		printf("\n\nSelecione a linha: ");
		scanf("%d", &i);
		
		MinMaxLin(i, mat);
}
