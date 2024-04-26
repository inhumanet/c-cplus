/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

02) Escreva um algoritmo que leia 3(três) números inteiros e apresente o maior e o
menor deles.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num1, num2, num3, maio, meno;
  printf("VER MAIOR E MENOR\n\n");  
 

  //entrada de dados
  printf("Digite o primeiro numero: ");
  scanf(" %d", &num1);
  printf("Digite o segundo numero: ");
  scanf(" %d", &num2);
  printf("Digite o terceiro numero: ");
  scanf(" %d", &num3);
  printf("\n\n");
  
  //verificacao dos dados
  if(num1>num2 && num1>num3) //verificar kem eh o maior
               printf("O primeiro numero e o maior entre os tres: %d \n", num1);
  else   if(num2>num1 && num2>num3)
               printf("O segundo numero e o maior entre os tres: %d \n", num2);
  else   if(num3>num1 && num3>num2)
               printf("O terceiro numero e o maior entre os tres: %d \n", num3);
  else         printf("NAO HA UN NUMERO MAIOR ENTRE OS 3, OU = OU <\n");
  
  if(num1<num2 && num1<num3) // verificar kem eh o menor
               printf("O primeiro numero e o menor entre os tres: %d \n\n\n\n", num1);
  else   if(num2<num1 && num2<num3)
               printf("O segundo numero e o menor entre os tres: %d \n\n\n\n", num2);
  else    if(num3<num1 && num3<num2)
               printf("O terceiro numero e o menor entre os tres: %d \n\n\n\n", num3);
  else         printf("NAO HA UM NUMERO MENOR ENTRE OS 3, OU = OU >\n");
  
  //encerramento
  printf("\n\n\n\n");  
  system("PAUSE");	
  return 0;
}
