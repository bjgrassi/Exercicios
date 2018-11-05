#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("O tamanho do inteiro em meu computador: %d bytes\n", sizeof(int));
    printf("O tamanho do float em meu computador: %d bytes\n", sizeof(float));
    printf("O tamanho do char em meu computador: %d bytes\n", sizeof(char));
    printf("short int: %d bytes\n", sizeof( short ) );
    printf("long int: %d bytes\n", sizeof( long ) );
    
    
    system("Pause");
    return 0;
}

/*v = (int*)malloc(sizeof(int)*10);  // 'v' é um ponteiro para uma área que
                                     // tem 10 inteiros.
                                     // 'v' funciona exatamente como um vetor
                                     */
