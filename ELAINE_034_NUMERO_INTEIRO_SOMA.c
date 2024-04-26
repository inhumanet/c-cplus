/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

34) Calcular a soma dos 100 primeiros nº naturais.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, soma,i;
  printf("SOMAR 100 NUMEROS INTEIROS\n\n");  
  soma=0;

  //entrada e verficacao se eh par
  for(i=0; i<100;i++)
     { 
        soma = soma + i;   
        printf("Num %d + soma: %d \n", i, soma);
     }
        printf("\nSoma total: %d\n", soma);
     
      
  //encerramento
  printf("\n\n\n\n");
  system("PAUSE");	
  return 0;
}
