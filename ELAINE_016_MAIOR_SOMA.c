/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

16) Para ler 3 números reais do teclado e verificar se o primeiro é maior que a soma dos
outros dois.

*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num1, num2, num3, maio, soma;
  printf("SOMA - VER O MAIOR\n\n");  
 

  //entrada de dados
  printf("Digite o primeiro numero: ");
  scanf(" %d", &num1);
  printf("Digite o segundo numero: ");
  scanf(" %d", &num2);
  printf("Digite o terceiro numero: ");
  scanf(" %d", &num3);
  printf("\n\n");
  
  //verificacao dos dados
  if(num1>(num2+num3)) //verificar kem eh o maior
               printf("O PRIMEIRO numero, %d, e maior que a soma dos outros numeros\n", num1);
  else   if(num2>(num1+num3))
               printf("O SEGUNDO numero, %d, e maior que a soma dos outros numeros\n", num2);
  else   if(num3>(num1+num2))
               printf("O TERCEIRO numero, %d, e o maior que a soma dos outros numeros\n", num3);
  else         printf("NENHUM NUMERO E MAIOR QUE A SOMA DOS OUTROS");
    
  //encerramento
  printf("\n\n\n\n");  
  system("PAUSE");	
  return 0;
}
