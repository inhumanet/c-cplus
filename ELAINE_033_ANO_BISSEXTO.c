/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

33) Que informe se um dado ano é ou não bissexto. Obs: um ano é bissexto se ele for
divisível por 400 ou se ele for divisível por 4 e não por 100.
Se for divisível por 400, então É bissexto;
Senão, se for divisível por 100, então NÃO É bissexto;
Senão, se for divisível por 4, então É bissexto;
Senão, não é bissexto.
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
