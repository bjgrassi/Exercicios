#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

/*int main ()
{ int peso, idade, magro, superior=0, qtd=0;
  char sexo;

  printf("Insira a idade ou num<=0 para sair.");
  scanf("%d", &idade);
  
  while (idade<=0){
  printf("Insira o peso em Kg: ");
  scanf("%d", &peso);
  printf("Insira f ou m para sexo: "); fflush(stdin);
  scanf("%c", &sexo);
  printf("Insira a idade ou num<=0 para sair.");
  scanf("%d", &idade);
  }
  
  magro=peso;
  magro=(magro<peso)?;printf("Peso do animal mais magro e sua idade: %d kg %d anos", magro, idade);
  superior=(idade>2)?;printf("quantidade de animais com idade superior a 2 anos: %d", superior;
  qtd=(sexo==m)?;printf("Quantidade de machos: %d", qtd;
  
  
    system("PAUSE");
return 0;
} */



//prof way

int main()
{ char sx;
  int mach=0, abat=0;
  float ps, magro=9999.0,id,idmagro;
  
  printf("idade ou valor <=0 para encerrar: ");
  scanf("%f", &id);
  
  while(id>0.0)
 {
   do{
       printf("Peso: ");
       scanf("%f", &ps);
       } while (ps<=0.0);
   
   do{
       printf("Sexo: "); fflush(stdin);
       scanf("%c", &sx); sx=toupper(sx);
     } while(sx!='M'&&sx!='F'); //GARANTIR M OU F

  if(ps<magro)
  { magro = ps;
    idmagro=id;
  }

    if(sx=='M')
      mach++;
      
    if(id>2.0)
      abat++;
      
      printf("Idade ou valor <= 0 para encerrar: ");
      scanf("%f", &id);
  }
  if(magro!=9999.0)
  {
    printf("Mais magro: %.f Kg e %.1f anos \n", magro, idmagro);
    printf("Quantidade animais idade > 2: %d\n", abat);
    printf("Quantidade de machos: %d\n", mach);
  }
         else
             printf("Saindo...\n"); 
        system("PAUSE");
return 0;
}
