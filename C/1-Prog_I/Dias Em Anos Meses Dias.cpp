#include <stdlib.h>
#include <stdio.h>

int main(){
	int dias, qtdAno=0, qtdMes=0, qtdDia=0;
	
	printf("Digite os dias: ");
	scanf("%d", &dias);
	
	if(dias != 0){
		if(dias >= 365){
			qtdAno = dias/365;
			dias = dias%365;
		}
		if((dias >= 30) && (dias <= 364)){
			qtdMes = dias/30;
			dias = dias%30;
		}
		if ((dias >= 1) && (dias <= 29)){
			qtdDia = dias;
			dias = 0;
		}
	}
	printf("%d ano(s) ", qtdAno);
	printf("%d mes(es) ", qtdMes);
	printf("%d dia(s) ", qtdDia);

	
	system("pause");
	
	return 0;
}
