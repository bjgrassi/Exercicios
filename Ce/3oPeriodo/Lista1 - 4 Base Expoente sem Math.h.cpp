#include<stdio.h>
#include<stdlib.h>

/*Escreva uma fun��o potenciaInt(base, expoente) que retorne o valor de baseexpoente. N�o use
nenhuma das fun��es da biblioteca matem�tica.*/ 

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
