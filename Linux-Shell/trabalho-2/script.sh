#!/bin/bash

  echo -e "\n[1] Listar conteúdo da pasta atual"
  echo "[2] Ver conteúdo de um arquivo"
  echo "[3] Testar se uma url está no ar"
  echo "[0] Sair"
  echo -e "\nEscolha a opcao: "
  read opc

while [ $opc -ne 0 ]
do
  if [ $opc -eq 1 ] ; then
    echo "$(ls)"
  elif [ $opc -eq 2 ]
  then
    echo -e "\nNome do arquivo que deseja abrir:"
    read arq
    if [ -f $arq ]
    then
      echo -e "\nO conteudo do arquivo eh:\n"
      cat $arq
      echo -e "\n"
     else
      echo -e "\nArquivo inexistente"
    fi
   elif [ $opc -eq 3 ]
   then
      echo -e "\nDigite o IP/NOME: "
      read IP
      if [ ! -z $IP ]; then
        ping -c 1 $IP
        if [ $? -eq 0 ]; then
         echo -e "\nURL esta no ar"
        else
         echo -e "\nURL nao esta no ar"
        fi
      else
       echo -e "\nURL vazia"
      fi
   elif [ $opc -eq 0 ]
   then
    echo -e "\nSaindo..."
    #break;
   else
    echo -e "\nNumero invalido"
   fi
   
  echo -e "\n[1] Listar conteúdo da pasta atual"
  echo "[2] Ver conteúdo de um arquivo"
  echo "[3] Testar se uma url está no ar"
  echo "[0] Sair"
  echo -e "\nEscolha a opcao: "
  read opc
done
