/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informa��o
Tutor: Wesley N�brega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

07) Elabore algoritmo que leia o c�digo e n�mero de horas trabalhadas de um oper�rio.
E calcule o sal�rio sabendo-se que ele ganha R$ 10,00 por hora. Quando o n�mero de
horas excederem a 50 calcule o excesso de pagamento. A hora excedente de trabalho
vale R$ 20,00. No final do processamento imprimir o sal�rio total e o sal�rio excedente,
caso esse �ltimo exista.	
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float hora, sal, extra, pagto;
  int codi;
  printf("CALCULO DO SALARIO POR HORA\n\n");  

  //entrada de dados
  printf("Digite o codigo: ");
  scanf("%d", &codi);
  printf("Digite o total de horas: ");
  scanf("%f", &hora);
  printf("\n\n");

  //calculos
  sal = hora * 10,00;
  extra = (hora - 50) * 20,00;
  pagto = extra + 500,00;

  //verificar 
  if(hora>50) {
             printf("CODIGO: %d\n", codi);
             printf("EXTRA E: %.2f\n", extra);
             printf("SEU SALARIO TOTAL E: %.2f\n\n", pagto); }
  else    {              
             printf("CODIGO: %d\n", codi);
             printf("SEU SALARIO TOTAL E: %.2f \n\n", sal); }            
  
  
  printf("\n\n\n\n");
  system("PAUSE");	
  return 0;
}
