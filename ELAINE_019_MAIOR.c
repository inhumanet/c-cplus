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
  int num1, num2, maio;
  printf("VER MAIOR\n\n");  
 

  //entrada de dados
  printf("Digite A: ");
  scanf(" %d", &num1);
  printf("Digite B: ");
  scanf(" %d", &num2);
  printf("\n\n");
  
  //verificacao dos dados
  if(num1>num2) //verificar kem eh o maior
               printf("A>B: %d \n", num1);
  else   if(num2>num1)
               printf("B>A: %d \n", num2);
  else         printf("A=B\n");
  
    
  //encerramento
  printf("\n\n\n\n");  
  system("PAUSE");	
  return 0;
}
