/*************************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

42) Imprimir a tabuada de qualquer número n.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, tabuada, num;
  printf("TABUADA\n\n");  
  i=1;
    
  printf("EXIBIR TABUADA DO: ... ");
  scanf(" %d", &num);
  printf("\n\n");
  
    
  for(i=0;i<=10;i++)
     { 
           tabuada=num*i;
           printf("%d x %d = %d\n", num, i,tabuada);
     }

      
  //encerramento
  printf("\n\n\n\n");
  system("PAUSE");	
  return 0;
}
