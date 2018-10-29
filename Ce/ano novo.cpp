#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<math.h>

int main () {
	float total=0, Tequila=10*2, Vodka=1, Cachaca=2, Agua=3, Coca=1;
	float limao, morango, abacaxi;
	float gelo, restoTotal;
	float precoAcobrar=10;
	int pessoas;
	
	total = Tequila + Vodka + Cachaca + Agua + Coca;
	printf("Pessoas a cobrar: %d", pessoas = total / precoAcobrar);
	printf("\nSobrou RS%2.f", restoTotal = (int)total % (int)precoAcobrar);
	
}
