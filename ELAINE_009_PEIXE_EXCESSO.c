/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

09) João Papo-de-Pescador, homem de bem, comprou um microcomputador para
controlar o rendimento diário de seu trabalho. Toda vez que ele traz um peso de peixes
maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos)
deve pagar um multa de R$ 4,00 por quilo excedente. João precisa que você faça um
algoritmo que leia a variável P (peso de peixes) e verifique se há excesso. Se houver,
gravar na variável E (Excesso) e na variável M o valor da multa que João deverá pagar.
Caso contrário mostrar tais variáveis com o conteúdo ZERO.		
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float Peso, M, Excesso;
  printf("PEIXE COM EXCESSO\n\n");  

  //entrada de dados
  printf("Digite o peso do pescado: ");
  scanf("%f", &Peso);
  printf("\n\n");

  //calculos
  Excesso = Peso - 50;
  M = Excesso * 4,00;
  

  //verificar 
  if(Peso>50) {
             printf("EXCESSO: %.2f\n", Excesso);
             printf("MULTA: %.2f\n", M);
              }
  else        {             
             printf("EXCESSO: ZERO\n", Excesso);
             printf("MULTA: ZERO\n", M); 
              }           
  
    //encerramento
  printf("\n\n\n\n");
   system("PAUSE");	
  return 0;
}
