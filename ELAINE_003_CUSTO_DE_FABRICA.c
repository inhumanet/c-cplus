/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

03) O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem do distribuidor e dos impostos (aplicado ao custo de fábrica). Supondo que
a percentagem do distribuidor seja de 12% e os impostos de 45%, preparar um
algoritmo para ler o custo de fábrica do carro e imprimir o custo ao consumidor.
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
  carronovo = custofab + ((custofab * imposto) + (custofab * distrib)); //formula dos acrescimos
  
  //saida de dados
  printf("\nO VALOR PARA O CONSUMIDOR E: %.2f \n\n\n\n", carronovo); 
 
  //encerramento
  printf("\n\n\n\n");  
  system("PAUSE");	
  return 0;
}
