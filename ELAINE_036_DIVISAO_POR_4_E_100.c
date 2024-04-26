/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

36) Calcular e imprimir os números divisíveis por 4 menores que 100.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  printf("NUMEROS DIVISIVEIS POR 4 < QUE 100\n\n");  

  //entrada
  for(i=0;i<100;i++)
     { 
               if(i%4==0)
               printf(" %d", i);
     }
           
      
  //encerramento
  printf("\n\n\n\n");
  system("PAUSE");	
  return 0;
}
