/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

13) Ler dois números inteiros, x e y, e imprimir o quociente e o resto da divisão inteira
entre eles.	
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x, y, quoc, resto;
  printf("QUOCIENTE E RESTO\n\n");  

  //entrada de dados
  printf("Digite X: ");
  scanf("%d", &x);
  printf("Digite Y: ");
  scanf("%d", &y);
  printf("\n\n");

  //calculos
  quoc = x/y;
  resto = (x/y,x%y);

  //exibir 
  printf("QUOCIENTE: %d\n", quoc);      
  printf("RESTO DA DIVISAO: %d", resto);
  
  //encerramento
  printf("\n\n\n\n");
  system("PAUSE");	
  return 0;
}
