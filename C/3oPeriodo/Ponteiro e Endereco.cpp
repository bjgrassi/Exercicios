#include<stdio.h>
#include<stdlib.h>

struct ponto {
 float x;
 float y;
};
int main ( )
{
struct ponto p = {10,20};
struct ponto *pp=&p;

printf("%.1f\n", p.y); //ok
printf("%d\n", &(p.y)); //7004 ?
printf("%d\n", &(pp->y)); //7016 ?
printf("%f\n", pp->x); //ok
printf("%d\n", &pp->x); //
printf("%f\n", (&p)->x); //7008 ?
printf("%d\n", &((&p)->y)); //7020 ?


system("Pause");
    return 0;
}

