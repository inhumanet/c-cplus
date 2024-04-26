/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informa��o
Tutor: Wesley N�brega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

11) Uma f�brica de camisetas produz os tamanhos pequeno, m�dio e grande, cada uma
sendo vendida respectivamente por 10, 12 e 15 reais. Construa um algo ritmo em que o
usu�rio forne�a a quantidade de camisetas pequenas, m�dias e grandes referentes a uma
venda, e a m�quina informe quanto ser� o valor arrecadado.	
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float P, M, G, TOTAL;
  printf("CAMISETA\n\n");  

  //entrada de dados
  printf("Digite a quantidade de camiseta tamanho P: ");
  scanf("%f", &P);
  printf("Digite a quantidade de camiseta tamanho M: ");
  scanf("%f", &M);
  printf("Digite a quantidade de camiseta tamanho G: ");
  scanf("%f", &G);
  printf("\n\n");

  //calculos
  P = P * 10.00;
  M = M * 12.00;
  G = G * 14.00;
  TOTAL = P + M + G;

  //exibir 
  printf("VALOR TOTAL: %.2f", TOTAL);      
  
  //encerramento
  printf("\n\n\n\n");
  system("PAUSE");	
  return 0;
}
