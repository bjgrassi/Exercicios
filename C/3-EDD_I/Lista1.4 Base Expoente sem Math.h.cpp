#include<stdio.h>
#include<stdlib.h>

/*Escreva uma função potenciaInt(base, expoente) que retorne o valor de baseexpoente. Não use
nenhuma das funções da biblioteca matemática.*/ 

int potenciaInt(int base, int expoente){
	int i, valor=base;
		for(i=1;i<expoente;i++){
			valor*=base;
		}
		return valor;
}

int main(){
	int base, exp;
		
		printf("Base e exp: "); scanf("%d%d", &base, &exp);
		printf("result: %d ", potenciaInt(base,exp));
}
