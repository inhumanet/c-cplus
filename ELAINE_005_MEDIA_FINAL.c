/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079

**************************************************************************************
05) Calcular a média final (usando a ponderação da UAPI) dadas as notas das 3 provas e
produzir uma saída com a média e a situação do aluno de acordo com o seguinte
critério: média >= 7, aprovado; 5 < média < 7, recuperação; média < 5, reprovado.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float num1, num2, num3, media;
  printf("MEDIA DA UAPI\n\n");  

  //entrada de dados 
  printf("Digite a primeira nota: ");
  scanf(" %f", &num1);
  printf("Digite o segunda nota: ");
  scanf(" %f", &num2);
  printf("Digite o terceira nota: ");
  scanf(" %f", &num3);
  
  //calculo
  media = (num1 + num2 + num3)/3;          //media das 3 notas
  printf("\n\nA MEDIA E: %.1f \n", media);

  //verificacao dos dados
  if(media>=7.0 && media<=10.0)            //verificar situcao do aluno
                printf("\nALUNO APROVADO", media);
  else          if(media<5.0)
                printf("\nALUNO REPROVADO", media); 
  else          printf("\nALUNO EM RECUPERACAO", media); 

  //encerramento
  printf("\n\n\n\n");
  system("PAUSE");	
  return 0;
}
