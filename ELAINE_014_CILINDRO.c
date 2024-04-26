/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

14) Que informe a área e o volume de um cilindro.	
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float pi, areabase, arealateral, areatotal, volume, raio, altura;
  pi = 3.14;
  printf("CILINDRO - AREA E VOLUME\n\n");
    
  //entrada de dados
  printf("Digite o raio: ");
  scanf(" %f", &raio);
  printf("Digite a altura: ");
  scanf(" %f", &altura);
  printf("\n\n");

  //calculo
  volume = pi * (raio * raio) * altura;
  areabase = pi * (raio * raio);
  arealateral = 2 * pi * altura;
  areatotal = (2*areabase) + arealateral;

  //saida de dados
  printf("VOLUME: %f \n\n", volume);
  printf("AREA DA BASE: %f\n", areabase);
  printf("AREA DA LATERAL: %f \n", arealateral);
  printf("AREA TOTAL: %f \n", areatotal);
  
//encerramento
  printf("\n\n\n\n");  
  system("PAUSE");	
  return 0;
}
