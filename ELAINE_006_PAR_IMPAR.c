/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informa��o
Tutor: Wesley N�brega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

06) Escreva um algoritmo para ler um n�mero e verificar se ele � par ou �mpar. Quando
for par armazenar esse valor em P e quando for �mpar armazen�-lo em I. Exibir P e I no
final do processamento.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  printf("PAR OU IMPAR\n\n");  
  
  //entrada de dados
  printf("Digite um numero: ");
  scanf(" %2d", &num);
  
  //verificar os dados
  if(num%3==0) 
               printf("O numero e PAR");
  else         printf("O numero e IMPAR");
  
  //encerramento
  printf("\n\n\n\n");
  system("PAUSE");	
  return 0;
}
