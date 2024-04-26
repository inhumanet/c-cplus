/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

17) Leia a razão de uma PA (Progressão Aritmética) e o seu primeiro e último termos e
informe a soma dos elementos dessa PA.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int razao, termo1, termo2, soma;
  printf("PROGRESSAO ARITMETICA\n\n");  
 

  //entrada de dados
  printf("Digite o primeiro termo: ");
  scanf(" %d", &termo1);
  printf("Digite o ultimo termo: ");
  scanf(" %d", &termo2);
  printf("Digite a razao: ");
  scanf(" %d", &razao);
  printf("\n\n");
  
  //calculo
  soma=termo1+termo2+razao;
  
  //exibir dados
  printf("A SOMA DOS ELEMENTOS E: %d\n", soma);
  
  //encerramento
  printf("\n\n\n\n");  
  system("PAUSE");	
  return 0;
}
