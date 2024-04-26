/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

25) Que gere o preço de um carro ao consumidor e os valores pagos pelo imposto e pelo
lucro do distribuidor, sabendo o custo de fábrica do carro e que são pagos: a) de
imposto: 45% sobre o custo do carro; b) de lucro do distribuidor: 12% sobre o custo do
carro.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float carronovo, custofab, distrib, imposto;
  distrib = 0.12;
  imposto = 0.45; 
  printf("CUSTO DE FABRICA DE UM VEICULO\n\n");  
   
  //entrada de dados
  printf("Qual o custo de fabrica: ");
  scanf(" %f", &custofab);

  //calculo 
  imposto =(custofab * imposto);
  distrib=custofab * distrib;
  carronovo = custofab + imposto + distrib; //formula dos acrescimos
  
  //saida de dados
  printf("\nO VALOR PARA O CONSUMIDOR E: %.2f\n", carronovo); 
  printf("\nO VALOR DOS IMPOSTOS SOBRE O CUSTO DO AUTO E: %.2f \n", imposto); 
  printf("\nO VALOR DO LUCRO DO DISTRIBUIDOR E: %.2f \n\n\n\n", distrib); 
  
 
  //encerramento
  printf("\n\n\n\n");  
  system("PAUSE");	
  return 0;
}
