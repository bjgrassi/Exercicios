/* Ler o nome e o preco de diversas peças. FLAG: nome = FIM
e gravar em um arquivo binário.
Gerar um segundo arquivo binario com nome e preco de todas
as peças com preço superior a R$100,00
Atualizar o primeiro arquivo com peca ainda NAO cadastrada
(nao há pecas com nomes iguais    */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct r
    { char nome[41];
      float preco;
    }peca;  
    FILE *arq,*arq2;
   void gera(void);
   void grava(void);
   void atualiza(void);   
    
int main () 
{  int opcao;
   do{
      printf("Digite:\n1 - Gravar arq1\n2 - Gerar arq2\n3 - Atualizar arq1\n");
      scanf("%d",&opcao);
      if(opcao == 1) grava();
      else
         if(opcao==2)  gera();
         else
            if(opcao==3) atualiza();
     } while(opcao>=1 && opcao<=3);

     system("pause");
     return 0;  
}
   void grava(void)
   {   if ((arq=fopen("E:\\arq.bin","wb"))==NULL) 
    {    perror("\n\nNao foi possivel abrir o arquivo.\n");
         system("pause");
         exit(0);
    }
    printf("Nome (FIM para encerrar): ");
    fflush(stdin);
    gets(peca.nome);
    strupr(peca.nome);
    while (strcmp(peca.nome,"FIM")!=0)
    {   printf("Preco: R$");
        scanf("%f",&peca.preco);
        fwrite(&peca,sizeof(struct r),1,arq);
        printf("Nome(FIM para encerrar): ");
        fflush(stdin);
        gets(peca.nome);
        strupr(peca.nome);
    }   
    fclose(arq); 
   }

   void gera(void)
   { if ((arq=fopen("E:\\arq.bin","rb"))==NULL) 
    {
        perror("\n\nNao foi possivel abrir o arquivo.\n");
        system("pause");
        exit(0);
    }

    if ((arq2=fopen("E:\\arq2.bin","wb"))==NULL)
    {
        printf("\n\nNao foi possivel abrir o arquivo.\n");
        system("pause");
        exit(0);
    }
  
     
     fread(&peca,sizeof(struct r),1,arq);
     while(!feof(arq))
       { 
	   	if (peca.preco>100.0) 
        	fwrite(&peca,sizeof(struct r),1,arq2);
        	
        fread(&peca,sizeof(struct r),1,arq);
      }  
              
        
     fclose(arq);   
     fclose(arq2); 
}
   void atualiza(void)
   {    int teste=0; 
        char nome[41];   
        if ((arq=fopen("E:\\arq2.bin","ab+"))==NULL)
        {
            perror("\n\nNao foi possivel abrir o arquivo.\n");
            system("pause");
            exit(0);
        }
     printf("Qual o nome a ser gravado? ");
     fflush(stdin);
     gets(nome);
     strupr(nome);
     fread(&peca,sizeof(struct r),1,arq);
     while(!feof(arq))
       { if (strcmp(peca.nome,nome)) // nao funfou ta funfando
         {  teste = 1;
            break;
         }
         fread(&peca,sizeof(struct r),1,arq);
      }  
     if (teste==0)  
     {   
	 	printf("Preco: R$");
         scanf("%f",&peca.preco);  
         strcpy(peca.nome,nome);        
         fwrite(&peca,sizeof(struct r),1,arq);
         printf("Arquivo atualizado\n");
    }
    else
       printf("Peca ja cadastrada\n");
     fclose(arq); 
}
