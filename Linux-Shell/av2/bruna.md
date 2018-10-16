Unilasalle-RJ - AV2
Aluno: BRUNA JACINTO GRASSI 0050012984
Prova Av2 de Laboratorio de Sistemas Operacionais
Professor: Alex Salgado
1o. Semestre de 2017   Turno: MANHA
--------------------------------------------------
#### 1-Faça um script shell que:
- Pergunte por um nome e crie uma pasta e um arquivo.txt com o mesmo nome inserido.

2-Quantos erros tem no script abaixo? Qual(is) são eles?
case "$file" in
    *.txt}
        echo "É um arquivo de texto."
        cat "$file"
        
    *.gif|*.jpg|*.png}
        echo "É uma figura."
        xloadimage "$file"
        
    *}
        echo "Não sei que arquivo é esse."
        
esac

3-Usando estrutura de repetição, faça um script para exibir todos os arquivos
da pasta atual com tamanho maior que 500kb.

4-Usando estrutura de repetição, faça um script para calcular e exibir quantas
pastas e quantos arquivos tem na pasta atual.

5-Faça um script que leia um numero IP e retorna se endereço responde ou não ao 
comando ping.
Além disso, se for digitado um ip vazio, o script deve informar ao usuario.

Respostas aqui:
1-NOME DO ARQUIVO: q1.sh
2-"$file" -> Nao eh pra colocar aspas entre as variaveis
*.txt}, *.gif|*.jpg|*.png} e } -> o correto eh usar o parenteses )
3-NOME DO ARQUIVO: q3.sh
4-NOME DO ARQUIVO: q4.sh
5-NOME DO ARQUIVO: q5.sh
