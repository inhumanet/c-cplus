/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

43) Calcular e mostrar a média aritmética dos números pares compreendidos entre 13 e 73.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, soma,i,media;
  printf("SOMAR O QUE FOR PAR\n\n");  
  num=0;
  soma=0;


  //verficacao se eh par
  for(i=13; i<=73;i++)
     { 
           if(i%2==0)
              {
                     num=num+1;
                     soma=soma+i;
                     printf(" %d -  %d  = %d\n", num,i,soma);
              }
     }
     

     media=soma/num;
     printf("\n\nA MEDIA DOS NUMEROS PARES E: %d", media);   
     
      
  //encerramento
  printf("\n\n\n\n");
  system("PAUSE");	
  return 0;
}
