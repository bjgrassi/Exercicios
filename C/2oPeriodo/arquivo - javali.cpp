/*Um criador de javalis armazena em E:\arquivos\jav.dat as informações:
código (inteiro), peso (real), sexo (caracter - M ou F).
Gerar o arquivo E:\expo.txt, com os dados desejados*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
FILE *f1, *f2;
struct r
 {  int cod;
    float ps;
    char sx;
 } javali;

char opcao;  
void gerar(void),buscar(void), gravar(void),exibir(void);
int main()
{   do{
      printf("\nDigite\n G - Gerar\n E - Exibir\n N - Gerar Planilha(somente com o 1 antes)\n X - Sair\n\t: ");
      fflush(stdin);
      scanf("%c",&opcao);
      opcao=toupper(opcao);
      switch(opcao)
      { case 'G': 
         { gerar(); break; }
        case 'E':
         { exibir(); break; }
        case 'N':
         { gravar();  break; } //Tem que gerar o binario primeiro
        case 'X':
         { break; }
         default:
         {  puts("Opcao invalida");       }
      }
   }while(opcao!='X');
  system("pause");
  return 0;
}

void gerar (void)
{    system("cls");
    if((f1 = fopen("C:\\Users\\brukgrassi\\Documents\\Meus Documentos\\Sistemas Informacao\\Exercicios\\C\\2oPeriodo\\jav1.dat", "wb"))==NULL)
      {  perror ("Impossivel Gerar\n");
         system("pause");
         exit(0);
      }
   //Ler enquanto codigo for maior ou igual 0
     printf("Digite o codigo: ");
     scanf("%d",&javali.cod);
     while(javali.cod >0)
     {   printf("Digite o peso: ");
         scanf("%f",&javali.ps);
         do{    printf("Digite o sexo M ou F: ");
                fflush(stdin);
                scanf("%c",&javali.sx);
                javali.sx=toupper(javali.sx);
            }while(javali.sx != 'M' && javali.sx != 'F');
         
         fwrite(&javali,sizeof(struct r),1,f1);//gravacao como binario
         printf("Digite o codigo ou zero para encerrar: ");
         scanf("%d",&javali.cod);
       }
   fclose(f1);
}  
  
void exibir(void)
{    system("cls");
    if((f1 = fopen("C:\\Users\\brukgrassi\\Documents\\Meus Documentos\\Sistemas Informacao\\Exercicios\\C\\2oPeriodo\\jav1.dat","rb"))==NULL)
      {  perror("Impossivel Abrir\n"); system("pause"); exit(0); }
   fread(&javali,sizeof(struct r),1,f1);//ler para entrar no while
   while(!feof(f1))//exibe na tela e ler novamente para sair do while
      {  printf("Codigo = %d\tPeso = %.1f Kg \tSexo = %c\n",javali.cod,javali.ps,javali.sx);
         fread(&javali,sizeof(struct r),1,f1);
      }
   fclose(f1);
}       

void gravar(void)
{    system("cls");
    if((f1 = fopen("C:\\Users\\brukgrassi\\Documents\\Meus Documentos\\Sistemas Informacao\\Exercicios\\C\\2oPeriodo\\jav1.dat", "rb"))==NULL)
      {  perror ("Impossivel Abrir\n"); system("pause"); exit(0); }
   if((f2 = fopen("C:\\Users\\brukgrassi\\Documents\\Meus Documentos\\Sistemas Informacao\\Exercicios\\C\\2oPeriodo\\expo.xls", "w"))==NULL)
      {  perror ("Impossivel gerar\n"); system("pause"); exit(0); }
   fread(&javali,sizeof(struct r),1,f1); //Lê em f1
   fprintf(f2,"Codigo\tPeso\n");//Grava em f2
   while(!feof(f1))
      {    
            fprintf(f2,"%d\t%.2f\n",javali.cod,javali.ps); //gravacao no novo arquivo
            
            fread(&javali,sizeof(struct r),1,f1);
      }
      puts("expo.xls gerado com sucesso");
   fclose(f1);
   fclose(f2);
}
