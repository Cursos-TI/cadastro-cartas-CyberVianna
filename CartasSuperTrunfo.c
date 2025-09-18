#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   int populacao, turismo;
    char inicial = 'E';
    char nome[20];
    float area;
    float pib;
    char codigo[30];
  // Área para entrada de dados
  printf("Código da Carta: \n");
    scanf("%s", &codigo);

    printf("Nome da Cidade:\n");
    scanf("%s", &nome);

    printf("Número da População: \n");
    scanf("%d", &populacao);

    printf("Área em Km²:\n");
    scanf("%f", &area);

    printf("PIB:\n");
    scanf("%f", &pib);

    printf("Pontos Turísticos:\n");
    scanf("%d", &turismo);
  // Área para exibição dos dados da cidade
    printf("Carta 1:\n");
    printf("Estado: %c\n", inicial);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %fKm²\n", area);
    printf("PIB: %fbilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turismo);
  
return 0;
} 
