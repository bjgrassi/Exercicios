/*3) Gerar o arquivo prog2.bin, com nome (50 caracteres) e nota final dos 
alunos. A entrada das notas termina com um nome igual a XXX.
4) Ler o arquivo prog2.bin e imprima a média dos alunos da turma e 
quantos alunos tiveram notas acima da média.
4a) Atualizar o arquivo até encontrar nome XXX
4b) Gerar um arquivo somente com o NOME dos alunos com média abaixo de 6,0 
OBS:   USAR funções, inclusive MENU   */
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
struct r
{   char nome [51];
    float nota;
} reg;

FILE *p,*p1;

void menu(void), gera(void), atualiza(void),exibe(void),calcula(void),acima(void);
int main()
{   menu();   system("pause");   return 0;  }
void menu(void)
{   char opcao;
    do{ printf("\nG - Gerar\nA - Atualizar\nE - Exibir\nC - Calcular\nM - Acima da Media\nS - Sair\n\t: ");
        fflush(stdin);
        scanf("%c",&opcao);    opcao=toupper(opcao);
        if(opcao=='G')  gera();
        else    if(opcao=='A')  atualiza();
                else    if(opcao=='E')  exibe();
                        else    if(opcao=='C')  calcula();
                                else    if(opcao=='M')  acima();
                
    }while(opcao!='S');
    puts("Saindo...");
} 

void gera(void)
{   int tam;
    if((p=fopen("E:\\alunosnotas.bin","wb"))==NULL)
    {   perror("Erro de abertura\n");
        system("pause");
        exit(0);
    }
    printf("Digite um nome ou XXX para encerrar: ");
    fflush(stdin);
    gets(reg.nome);
    strupr(reg.nome);
    while(strcmp(reg.nome,"XXX")!=0)
    {   printf("Digite a media: ");
        scanf("%f",&reg.nota);
        fwrite(&reg,sizeof(struct r),1,p);
        printf("Digite um nome ou XXX para encerrar: ");
        fflush(stdin);
        gets(reg.nome);
        strupr(reg.nome);
    }
    fclose(p);
    puts("Arquivo gerado com sucesso!");
    system("pause");         
}
        
void exibe(void)
{  if((p=fopen("E:\\alunosnotas.bin","rb"))==NULL)
    {   perror("Erro de abertura para ler\n");
        system("pause");
        exit(0);
    }
    fread(&reg,sizeof(struct r),1,p);
    while(!feof(p))
    {   printf("%s\t%.1f\n",reg.nome,reg.nota);
        fread(&reg,sizeof(struct r),1,p);
    }fclose(p);
    system("pause");
}
void acima(void)
{	
	int i=0;
	if((p=fopen("E:\\alunosnotas.bin","rb"))==NULL)
    {   perror("Erro de abertura\n");
        system("pause");
        exit(0);
    }
	
	if((p1=fopen("E:\\alunosnotasACIMA.bin","wb"))==NULL)
    {   perror("Erro de abertura\n");
        system("pause");
        exit(0);
    }
    
	fread(&reg,sizeof(struct r),1,p);	
	while(!feof(p)){
        if(reg.nota > 6.0) {
        	fwrite(&reg,sizeof(struct r),1,p1);
        	printf("Aluno %d acima da media: %s\t%.1f\n", i+1, reg.nome,reg.nota);
        	i++;
		}
        
        fread(&reg,sizeof(struct r),1,p);
	}

	//rewind(p);
	fclose(p); fclose(p1);

}

void calcula(void)
{   float media=0.0;
	int cont=0;
	if((p=fopen("E:\\alunosnotas.bin","rb"))==NULL)
    {   perror("Erro de abertura\n");
        system("pause");
        exit(0);
    }fread(&reg,sizeof(struct r),1,p);	
	while(!feof(p))
    {   media += reg.nota; 
        fread(&reg,sizeof(struct r),1,p);
        cont++;
    }fclose(p);

 	printf("A media das notas sao: %.2f",(media/(float)cont));
}   
         

void atualiza(void)
{   printf("Arquivo sera atualizado no final\n");
	if((p=fopen("E:\\alunosnotas.bin","ab"))==NULL)
    {   puts("Erro de abertura para atualizar\n");  system("pause");   exit(0); 
	}
	
	printf("Digite um nome ou XXX para encerrar: ");
    fflush(stdin);
    gets(reg.nome);
    strupr(reg.nome);
    while(strcmp(reg.nome,"XXX")!=0)
    {   printf("Digite a media: ");
        scanf("%f",&reg.nota);
        fwrite(&reg,sizeof(struct r),1,p);
        printf("Digite um nome ou XXX para encerrar: ");
        fflush(stdin);
        gets(reg.nome);
        strupr(reg.nome);
    }
    fclose(p);
    puts("Arquivo atualizado com sucesso!\n");
}
