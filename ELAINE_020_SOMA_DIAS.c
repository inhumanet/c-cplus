/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

20) Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o
início do ano. Esqueça a questão dos anos bissextos e considere sempre que um mês
possui 30 dias.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int dia, mes, tempo;
  printf("VER A QUANTIDADE DE DIAS ATE ESTA DATA\n\n");  
 

  //entrada de dados
  printf("DIA(DD):");
  scanf(" %d", &dia);
  printf("MES(MM): ");
  scanf(" %d", &mes);
  printf("\n\n");
 
  //calculo
  tempo = ((mes-1)*30)+dia;
  
  //saida de dados
  printf("TEMPO DECORRIDO: %d dias", tempo);
 
  
  //encerramento
  printf("\n\n\n\n");  
  system("PAUSE");	
  return 0;
}
