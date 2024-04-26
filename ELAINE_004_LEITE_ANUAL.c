/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079

**************************************************************************************
04) A fazenda de Sr. José é famosa pela qualidade do leite que ela produz, sabendo que
as vacas desse Sr. produzem 10 (dez) litros de leite por dia e que ele possui no seu
rebanho 550 produtoras de leite, escreva um algoritmo que calcule quantos litros de leite
são produzidos num período de 30(trinta) dias, quando for informado o número de
animais que participaram do processo de coleta do leite.		
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int leitedia, vacatotal, leitemes; 
  leitedia = 10;
  printf("CALCULO DO LEITE\n\n");
    
  //entrada de dados
  printf("Quantas animais participaram da colta do leite durante o mes: ");
  scanf(" %d", &vacatotal);

  //calculo
  leitemes = (vacatotal * leitedia)*30; 
  
  //saida de dados
  printf("\nTOTAL DE LITROS DE LEITE PRODUZIDOS NO MES: %.2d", leitemes); 
 
  //encerramento
  printf("\n\n\n\n"); 
  system("PAUSE");	
  return 0;
}

