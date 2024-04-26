/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

08) Elabore um algoritmo que rceceba a idade de um nadador e classifique-o em uma
das seguintes categorias:
Infantil A = 5 a 7 anos
Infantil B = 8 a 11 anos
Juvenil A = 12 a 13 anos
Juvenil B = 14 a 17 anos
Adultos = Maiores de 18 anos	
*************************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main()
{
  int idade;
  printf("CATEGORIA DO NADADOR\n\n");  

  //entrada de dados
  printf("Digite a idade do nadador: ");
  scanf("%d", &idade);
  

  //verificar 
  if(idade<5) 
             printf("IDADE FORA DAS CATEGORIAS\n");
  else  if(idade>=5 && idade<=7)              
             printf("Infantil A = 5 a 7 anos");
  else  if(idade>=8 && idade <=11)              
             printf("Infantil B = 8 a 11 anos");      
  else  if(idade>=12 && idade<=13)              
             printf("Juvenil A = 12 a 13 anos");      
  else  if(idade>13 && idade<18)              
             printf("Juvenil B = 14 a 17 anos");      
  else       printf("Adultos = Maiores de 18 anos");      
  
  
  
  //encerramento  
  printf("\n\n\n\n");
  system("PAUSE");	
  return 0;
}
