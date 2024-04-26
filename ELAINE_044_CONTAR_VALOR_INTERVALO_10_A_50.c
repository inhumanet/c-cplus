/* ***********************************************************************************
UAPI - UNIVERSIDADE ABERTA DO PIAUI
UFPI - UNIVERSIDADE FEDERAL DO PIAUI
POLO: INHUMA
Curso de Bacharelado em Sistemas de Informação
Tutor: Wesley Nóbrega

**************************************************************************************
             Aluna: ELAINE DA SILVA MOURA         MATRIC: 10L06079
**************************************************************************************

44) Ler 10 valores, um de cada vez, e contar quantos deles estão no intervalo [10,50] e
quantos deles estão fora deste intervalo, mostrando estas informações.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, i,dentro, fora;
  printf("10 VALORES - CONTAR O INTERVALO DE 10 A 50\n\n");  
 


  for(i=1;i<=9;i++);
      {
           printf("Digite um numero: ");
           scanf("%d", &num);
           if(num>=10 && num<=50)
                 dentro=dentro+1;
           else  fora=fora+1;
      }
      
//  printf("\n\nNO INTERVALO ENTRE 10 A 50, FICARAM DENTRO %d E, FORA %d",dentro, fora);    


/*  for(i=13; i<=73;i++)
     { 
           if(i%2==0)
              {
                     num=num+1;
                     soma=soma+i;
                     printf(" %d -  %d  = %d\n", num,i,soma);
              }
     }
     

     media=soma/num;
     printf("\n\nA MEDIA DOS NUMEROS PARES E: %d", media);   
*/     
      
  //encerramento
  printf("\n\n\n\n");
  system("PAUSE");	
  return 0;
}
