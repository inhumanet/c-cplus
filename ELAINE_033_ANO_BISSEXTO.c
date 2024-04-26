/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informa��o
Tutor: Wesley N�brega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

33) Que informe se um dado ano � ou n�o bissexto. Obs: um ano � bissexto se ele for
divis�vel por 400 ou se ele for divis�vel por 4 e n�o por 100.
Se for divis�vel por 400, ent�o � bissexto;
Sen�o, se for divis�vel por 100, ent�o N�O � bissexto;
Sen�o, se for divis�vel por 4, ent�o � bissexto;
Sen�o, n�o � bissexto.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int ano;
  printf("ANO BISSEXTO\n\n");  
  
  //entrada de dados
  printf("Digite um ano: ");
  scanf(" %d", &ano);

    
  //verificar os dados
  if((ano%400==0 || ano%4==0) && ano%100!=0)
                printf("ANO BISSEXTO");
                else   printf("NAO E UM ANO BISSEXTO");

/*  if(ano%400==0)
          printf("ANO BISSEXTO");
          else if(ano%100==0)
                    printf("NAO E UM ANO BISSEXTO");
                    else if(ano%4==0)
                                     printf("ANO BISSEXTO"); 
                                     else   printf("NAO E UM ANO BISSEXTO");
*/  
  //encerramento
  printf("\n\n\n\n");
  system("PAUSE");	
  return 0;
}
