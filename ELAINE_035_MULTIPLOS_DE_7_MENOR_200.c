/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

35) Imprimir os múltiplos de 7 menores que 200.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  printf("MULTIPLOS DE 7 < QUE 200\n\n");  

  //entrada
  for(i=7;i<200;i+=7)
     { 
               printf("%d ", i);
     }
           
      
  //encerramento
  printf("\n\n\n\n");
  system("PAUSE");	
  return 0;
}
