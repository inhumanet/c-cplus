/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informa��o
Tutor: Wesley N�brega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

23) A imobili�ria Im�bilis vende apenas terrenos retangulares. Fa�a um algoritmo para
ler as dimens�es de um terreno e depois exibir a �rea do terreno.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float area, largura, comprimento;
  printf("AREA DO TERRENO RETANGULAR\n\n");  
 

  //entrada de dados
  printf("Digite a largura: ");
  scanf(" %f", &largura);
  printf("\nDigite o comprimento: ");
  scanf(" %f", &comprimento);
  printf("\n\n");
  area=largura*comprimento;
  printf("AREA DO TERRENO: %.2f metros quadrados", area);
  printf("\n\n");
  
     
  //encerramento
  printf("\n\n\n\n");  
  system("PAUSE");	
  return 0;
}
