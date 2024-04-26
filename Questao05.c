/* Provavelmente a questão mais fácil, pois pedia apenas para declarar
 e usar uma Estrutura. Nada mais. Apenas declarar, atribuir valores
 e mostrar esse valores. Uma pequena LIDA nos slides da aula resolveria
 até porque o exemplo era quase identico */
#include <stdio.h>
#include <stdlib.h>

int main()
{
struct pessoa  { // Declaração da Estrutura : Tem que se dar um nome à Estrutura
  char nome[50];
  int idade;
  float peso;
}ficha; // Tem que se declarar uma variaável para acessar a estrutura
  printf("#############Cadastro de Pessoas################\n\n");
  printf("Digite o nome da pessoa:");
  gets(ficha.nome);// Leitura de String daqui pra frente só com GETS();
  printf("\nEntre com a idade da pessoa:");
  scanf("%d",&ficha.idade); // Leitura dos outros dados, normal
  printf("\nDigite seu peso:");
  scanf("%f",&ficha.peso);
  printf("#############++++++++++++++++++################\n\n"); // Impressão dos dados da Estrutura
  printf("Os dados digitados foram: Nome: %s , Idade: %d, Peso: %8.3f\n\n",ficha.nome,ficha.idade,ficha.peso);
  system("PAUSE");	
  return 0;
}
