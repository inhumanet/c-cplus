/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informa��o
Tutor: Wesley N�brega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

09) Jo�o Papo-de-Pescador, homem de bem, comprou um microcomputador para
controlar o rendimento di�rio de seu trabalho. Toda vez que ele traz um peso de peixes
maior que o estabelecido pelo regulamento de pesca do estado de S�o Paulo (50 quilos)
deve pagar um multa de R$ 4,00 por quilo excedente. Jo�o precisa que voc� fa�a um
algoritmo que leia a vari�vel P (peso de peixes) e verifique se h� excesso. Se houver,
gravar na vari�vel E (Excesso) e na vari�vel M o valor da multa que Jo�o dever� pagar.
Caso contr�rio mostrar tais vari�veis com o conte�do ZERO.		
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
