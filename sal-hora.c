#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float hora, sal, extra, pagto;
  int codi;

  printf("Digite o codigo: ");
  scanf("%d", &codi);
  printf("Digite o total de horas: ");
  scanf("%f", &hora);
  printf("\n\n");

  sal = hora * 10,00;
  extra = (hora - 50) * 20,00;
  pagto = extra + 500,00;

  if(hora>50) {
             printf("CODIGO: %d\n", codi);
             printf("EXTRA E: %.2f\n", extra);
             printf("SEU SALARIO TOTAL E: %.2f\n\n", pagto); }
  else    {              
             printf("CODIGO: %d\n", codi);
             printf("SEU SALARIO TOTAL E: %.2f \n\n", sal); }            
  
  printf("\n\n");
 
 system("PAUSE");	
  return 0;
}
