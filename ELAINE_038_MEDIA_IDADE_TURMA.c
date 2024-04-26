/*************************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

38) Calcular a média de idade de uma turma qualquer.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int idade, i, media, qtde, soma;
  printf("MEDIA DA IDADE DOS ALUNOS\n\n");  
  soma=0;
  
  //entrada
  printf("Digite a quantidade de alunos na turma: ");
  scanf(" %d", &qtde);
  printf("\n\n");

  
  for(i=1;i<=qtde;i++)
     { 
           printf("Digite a idade do aluno: ");
           scanf(" %d", &idade);
           soma=soma+idade;
     }
  media=soma/qtde;
  printf("\n\n\nA MEDIA DA IDADE DA TURMA E: %d",media);
  
      
  //encerramento
  printf("\n\n\n\n");
  system("PAUSE");	
  return 0;
}
