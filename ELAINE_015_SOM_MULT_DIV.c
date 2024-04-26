/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

15) Para ler dois valores reais do teclado, calcular e imprimir na tela:
a) A soma destes valores b) O produto deles c) O quociente entre eles	
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float num1, num2, num3, soma, divi, mult;
  printf("SOMA, MULTIPLICA, DIVIDE\n\n");
    
  //entrada de dados
  printf("Digite o primeiro numero: ");
  scanf(" %f", &num1);
  printf("Digite o segundo numero: ");
  scanf(" %f", &num2);
  printf("Digite o terceiro numero: ");
  scanf(" %f", &num3);
  printf("\n\n");

  //calculo
  soma = num1 + num2 + num3;
  divi = soma / 3;
  mult = num1 * num2 * num3;

  //saida de dados
  printf("SOMA E: %.1f \n", soma);
  printf("A MULTIPLICACAO E: %.1f\n", mult);
  printf("A DIVISAO E: %.1f \n", divi);
  
//encerramento
  printf("\n\n\n\n");  
  system("PAUSE");	
  return 0;
}
