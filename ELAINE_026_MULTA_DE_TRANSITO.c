/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

26) Leia a velocidade máxima permitida em uma avenida e a velocidade com que o
motorista estava dirigindo nela e calcule a multa que uma pessoa vai receber, sabendo
que são pagos: a) 50 reais se o motorista estiver ultrapassar em até 10km/h a velocidade
permitida (ex.: velocidade máxima: 50km/h; motorista a 60km/h ou a 56km/h); b) 100
reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida. c) 200 reais, se
estiver acima de 31km/h da velocidade permitida.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int velolocal, veloauto, km_ultrapassa;
  printf("MULTA DE TRANSITO\n\n");  
   
  //entrada de dados
  printf("Qual a velocidade local: ");
  scanf(" %d", &velolocal);
  printf("Qual a velocidade do motorista: ");
  scanf(" %d", &veloauto);
  printf("\n\n");
  
  
  //calculo
  km_ultrapassa = veloauto-velolocal;
  
  
  //verificar velocidade
  if(km_ultrapassa>=1 && km_ultrapassa<=10)
          printf("VELOCIDADE MAXIMA: %d/h, MOTORISTA A %d/h. VALOR DA MULTA: R$ 50,00.", velolocal,veloauto);
  else    if(km_ultrapassa>=11 && km_ultrapassa<=30)        
          printf("VELOCIDADE MAXIMA: %d/h, MOTORISTA A %d/h. VALOR DA MULTA: R$ 100,00.", velolocal,veloauto);
  else    if(km_ultrapassa>=31)        
          printf("VELOCIDADE MAXIMA: %d/h, MOTORISTA A %d/h. VALOR DA MULTA: R$ 200,00.", velolocal,veloauto);
  else    printf("MOTORISTA NAO ULTRAPASSOU A VELOCIDADE PERMITIDA");
          
          
  //encerramento
  printf("\n\n\n\n");  
  system("PAUSE");	
  return 0;
}
