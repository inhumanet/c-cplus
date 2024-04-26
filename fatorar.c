#include <stdio.h>
#include <stdlib.h>

int main()
{
  int entra, n;
  printf("Entre com um numero: ");
  scanf("%d", &entra);
   for(n = 1; n <= entra; n ++)
     printf(" %d", n);
     printf("\n\n");
  system("PAUSE");	
  return 0;
}
