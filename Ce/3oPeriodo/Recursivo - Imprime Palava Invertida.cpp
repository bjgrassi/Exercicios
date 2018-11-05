#include<stdio.h>
#include<stdlib.h>

void imprime_inv (char* s) {
 if (s[0] != '\0') {
 imprime_inv(&s[1]);
 printf("\n%c ", s[0]);
 }
}

int main(){
	char c[20];
	
	printf("Digite uma palavra: ");
	scanf("%s", &c);
	imprime_inv(c);
system("Pause");
return 0;
}
