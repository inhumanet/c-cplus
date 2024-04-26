/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

01) Escreva um algoritmo para ler três números e imprimir a soma, média e produto dos
números lidos.		
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float num1, num2, num3, soma, medi, mult;
  printf("SOMA, MULTIPLICA, MEDIA\n\n");  
  
  //entrada de dados
  printf("Digite o primeiro numero: ");
  scanf(" %f", &num1);
  printf("Digite o segundo numero: ");
  scanf(" %f", &num2);
  printf("Digite o terceiro numero: ");
  scanf(" %f", &num3);

  //calculo
  soma = num1 + num2 + num3;          //soma os 3 numeros
  printf("\nA SOMA E: %.1f \n", soma);

  medi = soma / 3;                    //media dos 3 numeros
  printf("A MEDIA E: %.1f \n", medi);

  mult = num1 * num2 * num3;         //multiplica os 3 numeros
  printf("A MULTIPLICACAO E: %.1f", mult);
  
//encerramento
  printf("\n\n\n\n");  
  system("PAUSE");	
  return 0;
}
