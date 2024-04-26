/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

21) Faça um algoritmo que leia os valores A, B, C e diga se a soma de A + B é menor
que C.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int A, B, C, SOMA;
  printf("Se (A+B)<C\n\n");  
 

  //entrada de dados
  printf("Digite A: ");
  scanf(" %d", &A);
  printf("Digite B: ");
  scanf(" %d", &B);
  printf("Digite C: ");
  scanf(" %d", &C);
  printf("\n\n");
  SOMA = A+B;
  printf("\nSoma %d+%d=%d", A,B,SOMA);
  printf("\n\n");
  
  //verificacao dos dados
  if((A+B)<C)
               printf("SOMA MENOR QUE C");
 
    
  //encerramento
  printf("\n\n\n\n");  
  system("PAUSE");	
  return 0;
}
