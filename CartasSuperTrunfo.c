#include <stdio.h>
// Testes foram feitos com os dados do desafio
//Carta 1:                                    Carta 2:
//Estado: A                                   Estado: B
//Código: A01                                 Código: B02
//Nome da Cidade: SaoPaulo                    Nome da Cidade: RioDeJaneiro
//População: 12325000                         População: 6748000
//Área: 1521.11 km²                           Área: 1200.25 km²
//PIB: 699.28 bilhões de reais                PIB: 300.50 bilhões de reais
//Número de Pontos Turísticos: 50             Número de Pontos Turísticos: 30

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado_c1[50], Estado_c2[50],CodigoDaCarta_c1[10], CodigoDaCarta_c2[10],nomeDaCidade_c1[50], nomeDaCidade_c2[50];
  int pontosDeTurismo_c1, pontosDeTurismo_c2;
  float Area_c1, Area_c2,pip_c1, pip_c2;
  float densidadePopulacional_c1, densidadePopulacional_c2,pibPerCapita_c1, pibPerCapita_c2;
  const float fatorDeConversao = 1e9; 
  unsigned long int populacao_c1, populacao_c2;
  int resultadoPopulacaoC1, resultadoPopulacaoC2;
  int resultadoAreaC1, resultadoAreaC2, resultadoPibC1, resultadoPibC2, resultadoPontosTurismoC1, resultadoPontosTurismoC2, resultadoDensidadeC1, resultadoDensidadeC2, resultadoPibPerCapitaC1, resultadoPibPerCapitaC2,resultadoSuperpoderC1, resultadoSuperpoderC2;
  


  // Área para entrada de dados
  printf("\n=======================================================================\n");
  printf("     Ola Bem vindo ao cadastro de cartas do Super Trunfo - Cidades!");
  printf("\n=======================================================================\n");

  printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):  ");
  scanf("%s", Estado_c1);

  printf("Digite o codigo da carta:\nO código da carta deve ser a união da Letra do Estado (A a H) com o Número da Cidade (01 a 04)(ex: A01, B03).\n");
  scanf("%s", CodigoDaCarta_c1);

  printf("Digite o nome da cidade:  ");
  scanf("%s", nomeDaCidade_c1);

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


  densidadePopulacional_c1 = (float)populacao_c1 / Area_c1;
  densidadePopulacional_c2 = (float)populacao_c2 / Area_c2;
  pibPerCapita_c1 = pip_c1 * fatorDeConversao / (float)populacao_c1;
  pibPerCapita_c2 = pip_c2 * fatorDeConversao / (float)populacao_c2;



  // Área para exibição dos dados da cidade

  printf("Carta 1:\n");
  printf("Estado: %s\n", Estado_c1);
  printf("Código: %s\n", CodigoDaCarta_c1);
  printf("Nome da Cidade: %s\n", nomeDaCidade_c1); 
  printf("População: %d\n", populacao_c1);
  printf("Área: %.2fkm²\n", Area_c1);
  printf("PIB: %.2f bilhões de reais\n", pip_c1);
  printf("Pontos de Turismo: %d\n", pontosDeTurismo_c1);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional_c1);
  printf("Pib Per Capita: %.2f Reais\n", pibPerCapita_c1);
  printf("\n");

  printf("carta 2:\n");
  printf("Estado: %s\n", Estado_c2);
  printf("Código: %s\n", CodigoDaCarta_c2);
  printf("Nome da Cidade: %s\n", nomeDaCidade_c2); 
  printf("População: %d\n", populacao_c2);
  printf("Área: %.2fkm²\n", Area_c2);
  printf("PIB: %.2f bilhões de reais\n", pip_c2);
  printf("Pontos de Turismo: %d\n", pontosDeTurismo_c2);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional_c2);
  printf("Pib Per Capita: %.2f Reais\n", pibPerCapita_c2);
  printf("\n");

  float inversoDens1 = 1.0f / densidadePopulacional_c1;
  float inversoDens2 = 1.0f / densidadePopulacional_c2; 
  float SuperpoderC1 = populacao_c1 + Area_c1 + pip_c1 + pontosDeTurismo_c1 +  pibPerCapita_c1 + inversoDens1;
  float SuperpoderC2 = populacao_c2 + Area_c2 + pip_c2 + pontosDeTurismo_c2 + pibPerCapita_c2 + inversoDens2;

  printf("\n==================================\n");
  printf("       RESULTADO DA COMPARAÇÃO      \n");
  printf("==================================\n");

  resultadoPopulacaoC1 = (populacao_c1 > populacao_c2);
  resultadoPopulacaoC2 = (populacao_c2 > populacao_c1);
  printf("População: %s\n", resultadoPopulacaoC1 ? "Carta 1 Venceu (1)" : (resultadoPopulacaoC2 ? "Carta 2 Venceu (1)": "Empate"));

  resultadoAreaC1 = (Area_c1 > Area_c2);
  resultadoAreaC2 = (Area_c2 > Area_c1);
  printf("Área: %s\n", resultadoAreaC1 ? "Carta 1 Venceu (1)" : (resultadoAreaC2 ? "Carta 2 Venceu (1)": "Empate"));

  resultadoPibC1 = (pip_c1 > pip_c2);
  resultadoPibC2 = (pip_c2 > pip_c1);
  printf("PIB: %s\n", resultadoPibC1 ? "Carta 1 Venceu (1)" : (resultadoPibC2 ? "Carta 2 Venceu (1)": "Empate")); 

  resultadoPontosTurismoC1 = (pontosDeTurismo_c1 > pontosDeTurismo_c2);
  resultadoPontosTurismoC2 = (pontosDeTurismo_c2 > pontosDeTurismo_c1);
  printf("Pontos Turísticos: %s\n", resultadoPontosTurismoC1 ? "Carta 1 Venceu (1)" : (resultadoPontosTurismoC2 ? "Carta 2 Venceu (1)": "Empate")); 

  resultadoDensidadeC1 = (densidadePopulacional_c1 < densidadePopulacional_c2);
  resultadoDensidadeC2 = (densidadePopulacional_c2 < densidadePopulacional_c1);
  printf("Densidade Populacional: %s\n", resultadoDensidadeC1 ? "Carta 1 Venceu (0)" : (resultadoDensidadeC2 ? "Carta 2 Venceu (0)": "Empate"));

  resultadoPibPerCapitaC1 = (pibPerCapita_c1 > pibPerCapita_c2);
  resultadoPibPerCapitaC2 = (pibPerCapita_c2 > pibPerCapita_c1);
  printf("PIB Per Capita: %s\n", resultadoPibPerCapitaC1 ? "Carta 1 Venceu (1)" : (resultadoPibPerCapitaC2 ? "Carta 2 Venceu (1)": "Empate"));    

  resultadoSuperpoderC1 = (SuperpoderC1 > SuperpoderC2);
  resultadoSuperpoderC2 = (SuperpoderC2 > SuperpoderC1);
  printf("Superpoder: %s\n", resultadoSuperpoderC1 ? "Carta 1 Venceu (1)" : (resultadoSuperpoderC2 ? "Carta 2 Venceu (1)": "Empate"));   



return 0;
} 
