#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main (){
int A, B, DIV, MMC;
//clrscr();
printf(" Digite o primeiro número:");
scanf("%i",&A);
printf(" \nDigite o segundo número:");
scanf("%i",&B);
DIV = 2; // Irá dividir os números
MMC = 1; // Irá calcular o MMC
while ((A != 1) || (B != 1)) {// Condição de parada, não se poder mais dividir os números
  if (((A % DIV) == 0) || ((B % DIV) == 0)) {// Testa se DIV divide algum dos números
    if (((A % DIV) == 0) && ((B % DIV) == 0)) {// Se dividir os 2 ao mesmo tempo
      A = A / DIV; // O numero testado sera o resultado da divisão por DIV
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
 } else DIV++; // Acrescimo de DIV caso naõ divida nenhum dos números
}
printf(" \nO MMC eh : %d",MMC);
getch();
}

