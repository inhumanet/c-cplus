/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

12) Calcular a quantidade dinheiro gasta por um fumante. Dados: o número de anos que
ele fuma, o nº de cigarros fumados por dia e o preço de uma carteira.	
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float carteira, gasto;
  int ano, cigarro;
  printf("CIGARRO\n\n");  

  //entrada de dados
  printf("Digite ha quantos anos voce fuma: ");
  scanf("%d", &ano);
  printf("Digite quantos cigarros voce fuma por dia: ");
  scanf("%d", &cigarro);
  printf("Digite o preco de uma carteira de cigarro: ");
  scanf("%f", &carteira);
  printf("\n\n");

  //calculo
  gasto = ((((ano * 365)*cigarro)/20)*carteira);
 

  //saida de dados 
  printf("QUANTIDADE DE DINHEIRO JOGADO FORA: %.2f \n\n", gasto);            
  
  //encerramento
  printf("\n\n\n\n");
  system("PAUSE");	
  return 0;
}
