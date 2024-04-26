/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

22) Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais
deverá se somar os dois, caso contrário multiplique A por B ao final do calculo atribuir
o valor para uma variável C.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int A, B, C;
  printf("Se (A=B)soma, senao multiplica\n\n");  
 

  //entrada de dados
  printf("Digite A: ");
  scanf(" %d", &A);
  printf("Digite B: ");
  scanf(" %d", &B);
  printf("\n\n");
  
  //verificacao dos dados
  if(A==B){
             C=A+B;
             printf("%d=%d, SOMA = %d\n", A,B,C);
         }
  else   {
             C=A*B;
             printf("%d*%d=%d\n", A,B,C);
         }
    
  //encerramento
  printf("\n\n\n\n");  
  system("PAUSE");	
  return 0;
}
