#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main (){
int A, B, DIV, MMC;
//clrscr();
printf(" Digite o primeiro n�mero:");
scanf("%i",&A);
printf(" \nDigite o segundo n�mero:");
scanf("%i",&B);
DIV = 2; // Ir� dividir os n�meros
MMC = 1; // Ir� calcular o MMC
while ((A != 1) || (B != 1)) {// Condi��o de parada, n�o se poder mais dividir os n�meros
  if (((A % DIV) == 0) || ((B % DIV) == 0)) {// Testa se DIV divide algum dos n�meros
    if (((A % DIV) == 0) && ((B % DIV) == 0)) {// Se dividir os 2 ao mesmo tempo
      A = A / DIV; // O numero testado sera o resultado da divis�o por DIV
      B = B / DIV;
      MMC = MMC * DIV ; // Vamos logo guardando o MMC
    }
    else if (((A % DIV) == 0) && ((B % DIV) != 0)) { // Se dividir apenas um numero
      A = A / DIV; // Idem
      MMC = MMC * DIV ;
    }
    else if (((B % DIV) == 0) && ((A % DIV) != 0)) {
      B = B / DIV; // Idem
      MMC = MMC * DIV ;
    }
 } else DIV++; // Acrescimo de DIV caso na� divida nenhum dos n�meros
}
printf(" \nO MMC eh : %d",MMC);
getch();
}

