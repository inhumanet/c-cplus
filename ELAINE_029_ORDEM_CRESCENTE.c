/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

29) Ler três valores e colocá-los em ordem crescente.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num1,num2,num3, a, b, c;
  printf("ORDEM CRESCENTE\n\n");  
   
  //entrada de dados
  printf("Digite o primeiro numero: ");
  scanf(" %d", &num1);
  printf("Digite o segundo numero: ");
  scanf(" %d", &num2);
  printf("Digite o terceiro numero: ");
  scanf(" %d", &num3);
  printf("\n\n");


  //verificar menor
  if(num1<num2 && num1<num3)
            a=num1;
  else if(num2<num1 && num2<num3)
            a=num2;
  else      a=num3;
     
  //verificar maior
  if(num1>num2 && num1>num3)
            c=num1;
  else if(num2>num1 && num1>num3)
            c=num2;
  else      c=num3;

  //verificar intermediario
  if(a!=num1 && c!=num1)
            b=num1;
  else if(a!=num2 && c!=num2)
            b=num2;
  else      b=num3;
     
  //saida de dados
  printf(" %d, %d, %d", a,b,c); 
 
  //encerramento
  printf("\n\n\n\n");  
  system("PAUSE");	
  return 0;
}
