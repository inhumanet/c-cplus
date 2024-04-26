/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

32) Ler 4 números inteiros e calcular a soma dos que forem par.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, par,i;
  printf("SOMAR O QUE FOR PAR\n\n");  
  par=0;

  //entrada e verficacao se eh par
  for(i=0; i<4;i++)
     { 
        printf("Digite um numero: ");
        scanf("%2d",&num);
        printf("\n");
        if(num%2==0)
           par=par+num;
     }
  //verificar a soma dos pares
  if(par>0)
            printf("A SOMA DOS NUMEROS PARES: %d", par);   
            else  printf("NAO HA NUMEROS PARES A SEREM SOMADOS");
      
  //encerramento
  printf("\n\n\n\n");
  system("PAUSE");	
  return 0;
}
