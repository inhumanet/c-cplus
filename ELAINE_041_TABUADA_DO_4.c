/*************************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

41) Imprimir a tabuada do número 4.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, tabuada;
  printf("TABUADA DO 4\n\n");  
  i=1;
    
    
  for(i=0;i<=10;i++)
     { 
           tabuada=4*i;
           printf("4 x %d = %d\n", i,tabuada);
     }

      
  //encerramento
  printf("\n\n\n\n");
  system("PAUSE");	
  return 0;
}
