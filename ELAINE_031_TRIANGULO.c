/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

31) Ler três valores do teclado e dizer se eles formam um triângulo. Caso afirmativo,
dizer seu tipo (equilátero, isósceles ou escaleno).
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a, b, c;
  printf("TRIANGULO\n\n");  
   
  //entrada de dados
  printf("Digite o lado A: ");
  scanf(" %d", &a);
  printf("Digite o lado B: ");
  scanf(" %d", &b);
  printf("Digite o lado C: ");
  scanf(" %d", &c);
  printf("\n\n");


  //verificar 
  if(a==b && a==c)
            printf("TRIANGULO EQUILATERO");
  else if(a!=b && a!=c && b!=c)
            printf("TRIANGULO ESCALENO");
  else      printf("TRIANGULO ISOCELES");
     
 
  //encerramento
  printf("\n\n\n\n");  
  system("PAUSE");	
  return 0;
}
