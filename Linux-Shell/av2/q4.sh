#4-Usando estrutura de repetição, faça um script para calcular e exibir quantas
#pastas e quantos arquivos tem na pasta atual.

#!/bin/bash

sumd=0
suma=0
for j in $(ls ~)
do
	if [[ -d $j ]] ; then
		sumd=$(( $sumd + $j )) 
	fi

        if [ -f $j ] ; then
                suma=$(( $suma + $j )) 
        fi

done
#echo -e "\nDiretorios:" $(($sumd + $j))
echo -e "\nA quantidade de diretorios eh: $sumd"
echo -e "\nA quantidade de arquivos eh: $suma"
