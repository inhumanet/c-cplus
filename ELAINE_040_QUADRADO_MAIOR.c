/*************************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

40) Imprimir o menor inteiro positivo x cujo quadrado é superior a um valor L dado.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int L, i,menor;
  printf("MENOR INTEIRO DE UM NUMERO\n\n");  
  
  
  //entrada
  printf("Digite L: ");
  scanf(" %d", &L);
  printf("\n\n");

  while(menor>=1)
        for(i=L;i>=1;i-=1) 
           {                           
              if((menor*menor)>L)
                                
  
  for(i=L;i>=1;i-=1)
     { 
        if((i*i)>L)
                 menor=menor-1;
                 printf(" %d ", menor);
     }

      
  //encerramento
  printf("\n\n\n\n");
  system("PAUSE");	
  return 0;
}
