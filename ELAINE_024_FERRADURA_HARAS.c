/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informa��o
Tutor: Wesley N�brega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

24) Fa�a um algoritmo para calcular quantas ferraduras s�o necess�rias para equipar
todos os cavalos comprados para um haras.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int ferradura;
  printf("QTDE FERRADURA\n\n");  
 

  //entrada de dados
  printf("Digite a quantidade de cavalos: ");
  scanf(" %d", &ferradura);
  printf("\n\n");
  
  //calculo
  ferradura=ferradura*4;
  
  //exibir dados
  printf("QUANTIDADE DE FERRADURAS NECESSARIAS: %d", ferradura);
     
  //encerramento
  printf("\n\n\n\n");  
  system("PAUSE");	
  return 0;
}
