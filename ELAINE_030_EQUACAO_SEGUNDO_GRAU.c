/*************************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

30) Ler os três coeficientes de uma equação de segundo grau e determinar suas raízes.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
  int delta, a, b, c;
  float x1,x2,raizdelta;
  printf("EQUACAO SEGUNDO GRAU\n\n");  
   
  //entrada de dados
  printf("De o valor de A: ");
  scanf(" %d", &a);
  printf("De o valor de B: ");
  scanf(" %d", &b);
  printf("De o valor de C: ");
  scanf(" %d", &c);
  printf("\n\n");


  //calculo
  delta=((b*b)-(4*a*c));     //teste 6 7 1 em qualquer ordem
  raizdelta=sqrt(delta);     //raiz quadrada - biblioteca math.h
  x1=(((b* -1)+raizdelta)/(2*a));
  x2=(((b*-1)-raizdelta)/(2*a));
 
  //verficar
  if(raizdelta<=0)
                  printf("NAO HA RAIZ DE DELTA VALIDA");
                  else   printf("DELTA: %d     X1: %.3f      X2: %.3f", delta,x1,x2);
  
   
  //encerramento
  printf("\n\n\n\n");  
  system("PAUSE");	
  return 0;
}
