#include <stdio.h>
int main(){

//Definição das variáveis para Carta 1:
    int populacao, turismo;
    char inicial = 'E';
    char nome[20];
    float area;
    float pib;
    char codigo[30];
//Definição de variáveis para carta 2:
     int populacao2, turismo2;
    char inicial2 = 'B';
    char nome2[20];
    float area2;
    float pib2;
    char codigo2[30];

//Cadastramento da Carta 1 utilizando a função Scanf

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

//Cadastramento da Carta 2:
    printf("Código da Carta 2: \n");
    scanf("%s", &codigo2);

    printf("Nome da Cidade:\n");
    scanf("%s", &nome2);

    printf("Número da População: \n");
    scanf("%d", &populacao2);

    printf("Área em Km²:\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Pontos Turísticos:\n");
    scanf("%d", &turismo2);

/*Adicionando operadores matemáticos para os cálculos de
 densidada populacional e PIB per capita da carta1.*/

    float densidade = (float) populacao / area;
    double pibpercapita = pib / populacao;

//Resultado do cadastramento da Carta 1:
    printf("Carta 1:\n");
    printf("Estado: %c\n", inicial);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2fKm²\n", area);
    printf("PIB: %.2fbilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turismo);
    printf("Densidade Populacional:  %.2fhab/Km²\n", densidade);
    printf("PIB per Capita: %.2f milhões de reais\n", pibpercapita);

/*Adicionando operadores matemáticos para os cálculos de
 densidada populacional e PIB per capita da carta2.*/

    float densidade2 = (float) populacao2 / area2;
    double pibpercapita2 = pib2 / populacao2;


    //Resultado do cadastramento da Carta 2:
    printf("Carta 2:\n");
    printf("Estado: %c\n", inicial2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fKm²\n", area2);
    printf("PIB: %.2fbilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional:  %.2fhab/Km²\n", densidade2);
    printf("PIB per Capita: %.2f milhões de reais\n", pibpercapita2);


    return 0;
}