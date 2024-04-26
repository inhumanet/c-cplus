/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

10) Leia um número e exiba seu sucessor.	
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, suc;
  printf("SUCESSOR\n\n");  

  //entrada de dados
  printf("Digite um numero: ");
  scanf("%d", &num);
  printf("\n\n");

  //calculo
  suc = num+1;

  //exibir 
  printf("NUMERO: %d            ", num);      
  printf("SUCESSOR: %d", suc);
  
  //encerramento
  printf("\n\n\n\n");
  system("PAUSE");	
  return 0;
}
