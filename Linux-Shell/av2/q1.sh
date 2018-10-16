#!/bin/bash

echo -e "Insira o nome da pasta  a ser criada: "
read nome
mkdir $nome

#cria o arq
touch $nome.txt

echo -e "\nPasta $nome e arquivo .txt criados!"
