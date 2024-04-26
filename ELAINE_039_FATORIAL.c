/*************************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

39) Para calcular o fatorial de um número qualquer.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, fator, i;
  printf("FATORIAL DE UM NUMERO\n\n");  
  i=1;
  fator=1;
  
  //entrada
  printf("Digite um numero: ");
  scanf(" %d", &num);
  printf("\n\n");
  printf(" %d!   ", num);

  for(i=num;i>=2;i-=1)
     { 
           printf(" %d *", i);
           fator=fator*i;          
     }
  printf(" 1 = %d", fator);
//  printf("= %d", &fator);
      
  //encerramento
  printf("\n\n\n\n");
  system("PAUSE");	
  return 0;
}
