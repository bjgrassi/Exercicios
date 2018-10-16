### Aluno: Bruna Grassi 0050012984
### Prova de Laboratorio de Sistemas Operacionais
### Professor: Alex Salgado
### 1o. Semestre de 2017   Turno: Manha     AV1    24 Apr 2017
--------------------------------------------------
#### Com relação aos comandos do SO Linux, responda as perguntas abaixo:


#### 1 - Quais são as quatro liberdades básicas associadas ao software livre?
Resposta:As liberdades sao: Poder exercutar o programa para qualquer proposito, 
poder estudar o programa e adapta-lo, restribuir copias e aperfeicoar o codigo.

#### 2 - Qual o comando linux para mostrar todos os arquivos vazios da pasta atual?
Resposta: find / -size 0

#### 3 - Renomear o arquivo prova1-2017.txt da sua pasta para prova1-seunome.txt . Ex.: prova1-alex.txt
Resposta (Qual comando você utilizou?): mv prova1-2017.txt prova1-bruna.txt 

#### 4 - Crie 3 arquivos em branco que comecem com seu nome e termina com uma sequencia 1, 2 e 3. 
Ex.: alex1.txt, alex2.txt, alex3.txt. Que comandos você utilizou?
Resposta: touch bruna1.txt bruna2.txt bruna3.txt

#### 5 - Crie 1 pasta com seu nome+diadenascimento (ex.:alex25) e copie os 3 arquivos criandos anteriormente para esta pasta.
Resposta:
	mkdir bruna05 
	cp bruna1.txt bruna2.txt bruna3.txt bruna05

#### 6 - Utilizando wildcards, qual o comando para listar todos os arquivos que comecem com seu nome e termina com o numeral de 1 a 3 com extensão .txt?
Resposta: ls bruna?.txt

#### 7 - Existe um arquivo chamado access.log na sua pasta log. Qual é o ip que aparece no arquivo com mais frequencia e qual ip que aparece no arquivo com menos frequencia?
Resposta 1 : 

Resposta 2 (qual comando você utilizou? ):
ifconfig

#### 8 - Usando um comando linux, baixar o arquivo a seguir na sua  pasta principal http://evc-cit.info/cit052/grepdata.txt
Resposta 1 (qual comando você utilizou?):
wget

#### 9 - Com relação ao arquivo baixado no item anterior: Listar todas as linhas que contêm um endereço de e-mail (eles têm um @ neles), precedido pelo número da linha.
Resposta: 
aztecwrestling@example.com
Lawsonhawk@example.com
daren103@example.com


#### 10 - Listar todo o conteudo (todos os arquivos e pastas) a partir de sua pasta principal e direcionar a saida para o segundo arquivo do item 4.
Resposta (comando utilizado): 
ls > bruna05/bruna2.txt