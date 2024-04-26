/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

18) Ler um nome do teclado e ver se é igual ao seu nome. Imprimir conforme o caso:
“NOME CORRETO” ou “NOME INCORRETO”.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main(int argc, char *argv[])
{
  char nome[10];
  printf("VERIFICAR SE NOME = ELAINE\n\n");  
 

  //entrada de dados
  printf("Digite um nome: ");
  scanf(" %s", &nome);
  printf("\n\n");
  
  //verificacao dos dados
  if(!strcmp(nome,"ELAINE") || !strcmp(nome,"elaine"))
               printf("NOME CORRETO");
  else         printf("NOME INCORRETO");
  
  //encerramento
  printf("\n\n\n\n");  
  system("PAUSE");	
  return 0;
}
