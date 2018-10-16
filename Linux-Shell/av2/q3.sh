#3-Usando estrutura de repetição, faça um script para exibir todos os arquivos
#da pasta atual com tamanho maior que 500kb.
#!/bin/bas

echo -e "\nArquivos maiores que 500kb: "

for j in $(ls ~)
do
arq=$(ls)
	if [[ $arq -gt 500 ]] ; then
		echo "$arq"
	fi
done
