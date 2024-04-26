/*************************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

37) Calcular os divisores de um nº qualquer.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, i;
  printf("NUMEROS DIVISIVEIS POR UM NUMERO QUALQUER\n\n");  

  //entrada
  printf("Digite um numero: ");
  scanf(" %d", &num);
  
  for(i=1;i<=num;i++)
     { 
               if(num%i==0)
               printf(" %d", i);
     }
           
      
  //encerramento
  printf("\n\n\n\n");
  system("PAUSE");	
  return 0;
}
