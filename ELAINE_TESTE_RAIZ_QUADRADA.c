#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
main()
{
int NUM;
printf("\nINFORME NUMERO: ");
scanf("%d",&NUM);
if (NUM>0)
printf("\nA RAIZ QUADRADA DO NUMERO E: %2.2f",sqrt(NUM));
else
printf("\nO QUADRADO DO NUMERO E:%2.2f",pow(NUM,2));
printf("\n\n");
system("pause");
return(0);
}

