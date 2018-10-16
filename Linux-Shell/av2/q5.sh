#5-Faça um script que leia um numero IP e retorna se endereço responde ou não ao 
#comando ping.
#Além disso, se for digitado um ip vazio, o script deve informar ao usuario.

#!/bin/bash

echo "Escreva um IP"
read IP

 if [ ! -z $IP ]; then
   ping -c 1 $IP

 if [ $? -eq 0 ]; then
 	echo -e "\nIP esta respondendo"
 else
 	echo -e "\nIP nao esta respondendo"
 fi

 else
  echo -e "\nEste Ip esta vazio"

fi
