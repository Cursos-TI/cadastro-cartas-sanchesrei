#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado_c1[50], Estado_c2[50];
  char CodigoDaCarta_c1[10], CodigoDaCarta_c2[10];
  char nomeDaCidade_c1[50], nomeDaCidade_c2[50];
  int populacao_c1, populacao_c2;
  float Area_c1, Area_c2;
  float pip_c1, pip_c2;
  int pontosDeTurismo_c1, pontosDeTurismo_c2;

  // Área para entrada de dados
  printf("Ola Bem vindo ao cadastro de cartas do Super Trunfo - Cidades!\n");

  printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):  ");
  scanf("%s", &Estado_c1);

  printf("Digite o codigo da carta:\nO código da carta deve ser a união da Letra do Estado (A a H) com o Número da Cidade (01 a 04)(ex: A01, B03).\n");
  scanf("%s", &CodigoDaCarta_c1);

  printf("Digite o nome da cidade:  ");
  scanf("%s", &nomeDaCidade_c1);

  printf("Digite a pupulação da cidade:  ");
  scanf("%d", &populacao_c1);

  printf("Digite a área da cidade:  ");
  scanf("%f", &Area_c1);

  printf("digite o PIB da cidade:  ");
  scanf("%f", &pip_c1);

  printf("Digite os pontos turisticos da cidade:  ");
  scanf("%d", &pontosDeTurismo_c1);

  printf("\nCadastro realizado com sucesso!\n\n");
  printf("Cadastre outra carta\n");

  printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):  ");
  scanf("%s", &Estado_c2);

  printf("Digite o codigo da carta:\nO código da carta deve ser a união da Letra do Estado (A a H) com o Número da Cidade (01 a 04)(ex: A01, B03).\n");
  scanf("%s", &CodigoDaCarta_c2);

  printf("Digite o nome da cidade:  ");
  scanf("%s", &nomeDaCidade_c2);

  printf("Digite a pupulação da cidade:  ");
  scanf("%d", &populacao_c2);

  printf("Digite a área da cidade:  ");
  scanf("%f", &Area_c2);

  printf("digite o PIB da cidade:  ");
  scanf("%f", &pip_c2);

  printf("Digite os pontos turisticos da cidade:  ");
  scanf("%d", &pontosDeTurismo_c2);
  printf("\nCadastro realizado com sucesso!\n\n");


  // Área para exibição dos dados da cidade

  printf("Carta 1:\n");
  printf("Estado: %s\n", Estado_c1);
  printf("Código: %s\n", CodigoDaCarta_c1);
  printf("Nome da Cidade: %s\n", nomeDaCidade_c1); 
  printf("População: %d\n", populacao_c1);
  printf("Área: %.2fkm²\n", Area_c1);
  printf("PIB: %.2f\n", pip_c1);
  printf("Pontos de Turismo: %d\n", pontosDeTurismo_c1);
  printf("\n");

  printf("carta 2:\n");
  printf("Estado: %s\n", Estado_c2);
  printf("Código: %s\n", CodigoDaCarta_c2);
  printf("Nome da Cidade: %s\n", nomeDaCidade_c2); 
  printf("População: %d\n", populacao_c2);
  printf("Área: %.2fkm²\n", Area_c2);
  printf("PIB: %.2f\n", pip_c2);
  printf("Pontos de Turismo: %d\n", pontosDeTurismo_c2);
  printf("\n");



  

return 0;
} 
