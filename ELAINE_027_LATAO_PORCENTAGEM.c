/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

27) Sabendo que latão é constituído de 70% de cobre e 30% de zinco, indique a
quantidade de cada um desses componentes para se obter uma certa quantidade de latão
(requerida pelo usuário).
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float latao, cobre, zinco;
  cobre = 0.70;
  zinco = 0.30; 
  printf("CONSTITUICAO DO LATAO\n\n");  
   
  //entrada de dados
  printf("Qual a quantidade de latao: ");
  scanf(" %f", &latao);
  printf("\n\n");
  //calculo 
  cobre = latao * cobre;
  zinco = latao * zinco;
  
  //saida de dados
  printf(" %.0f de latao e constituido de %.0f de cobre e %.0f de zinco", latao,cobre,zinco); 
 
  //encerramento
  printf("\n\n\n\n");  
  system("PAUSE");	
  return 0;
}
