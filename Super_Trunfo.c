#include <stdio.h>
int main(){

//Definição das variáveis para Carta 1:
    int turismo;
    unsigned long int populacao;
    char inicial = 'E';
    char nome[20];
    float area;
    float pib;
    char codigo[30];
//Definição de variáveis para carta 2:
     int turismo2;
     unsigned long int populacao2;
    char inicial2 = 'B';
    char nome2[20];
    float area2;
    float pib2;
    char codigo2[30];

/*Cadastramento da Carta 1 utilizando a função Scanf
dados utilizados: Código:E01, Cidade: Vitória, Pop:343.378, área:97.123Km²
PIB: 31,42bi, PontosTurísticos: 22*/

    printf("Código da Carta: \n");
    scanf("%s", &codigo);

    printf("Nome da Cidade:\n");
    scanf("%s", &nome);

    printf("Número da População: \n");
    scanf("%lu", &populacao);

    printf("Área em Km²:\n");
    scanf("%f", &area);

    printf("PIB:\n");
    scanf("%f", &pib);

    printf("Pontos Turísticos:\n");
    scanf("%d", &turismo);

/*Cadastramento da Carta 2:
Dados utilizados: Código:B03, Cidade: Salvador, Pop:2.564.204
Área:692.589Km², PIB: 62,95bi, Pontos Turísticos:45*/


    printf("Código da Carta 2: \n");
    scanf("%s", &codigo2);

    printf("Nome da Cidade:\n");
    scanf("%s", &nome2);

    printf("Número da População: \n");
    scanf("%lu", &populacao2);

    printf("Área em Km²:\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Pontos Turísticos:\n");
    scanf("%d", &turismo2);

/*Adicionando operadores matemáticos para os cálculos de
 densidade populacional e PIB per capita da carta1.*/

    float densidade = (float) populacao / area;
    double pibpercapita = (float) pib / populacao;


//Adicioando o Super Poder da Carta 1:

    double inverso = area / (double) populacao;
    float   superpoder = (float) populacao + area + pib + pibpercapita + inverso;

//Resultado do cadastramento da Carta 1:
    printf("Carta 1: Espírito Santo\n");
    printf("Estado: %c\n", inicial);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %lu\n", populacao);
    printf("Área: %.2fKm²\n", area);
    printf("PIB: %.2fbilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turismo);
    printf("Densidade Populacional:  %.2fhab/Km²\n", densidade);
    printf("PIB per Capita: %.2f milhões de reais\n", pibpercapita);
    printf("Super Poder: %.2f\n", superpoder);

/*Adicionando operadores matemáticos para os cálculos de
 densidade populacional e PIB per capita da carta2.*/

    float densidade2 = (float) populacao2 / area2;
    double pibpercapita2 = (float) pib2 / populacao2;


//Adicioando o Super Poder da Carta 2:

     double inverso2 = area2 / (double) populacao2;
    float   superpoder2 = (float) populacao2 + area2 + pib2 + pibpercapita2 + inverso2;

    //Resultado do cadastramento da Carta 2:
    printf("Carta 2: Bahia\n");
    printf("Estado: %c\n", inicial2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2fKm²\n", area2);
    printf("PIB: %.2fbilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional:  %.2fhab/Km²\n", densidade2);
    printf("PIB per Capita: %.2f milhões de reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

/* Área de Comparação das Cartas básicas do tema 2: 
(Coloquei comentada para não aparecer na saída de dados)
    printf("Comparação das Cartas:\n");

    printf("População: Carta 2 venceu %d\n", (populacao > populacao2));
    printf("Área: Carta 2 venceu %d\n", (area > area2));
    printf("PIB: Carta 2 venceu %d\n", (pib > pib2));
    printf("Pontos Turísticos: Carta 2 venceu %d\n", (turismo >  turismo2));
    printf("Densidade Populacional: Carta 1 venceu %d\n", (densidade < densidade2));
    printf("PIB Per Capita: Carta 1 venceu %d\n", (pibpercapita > pibpercapita2));
    printf("Super Poder: Carta 2 venceu %d\n", (superpoder > superpoder2)); */

/*DESAFIO NOVATO 
Aplicação da lógica do jogo utilizando estrutura de decisão IF - ELSE para realizar comparação
das cartas por atributos. 

   printf("Comparação de Cartas (Atributo: População)\n");
   printf("Carta 1 - Espírito Santo (ES): %lu\n", populacao);
   printf("Carta 2 - Bahia (BA): %lu\n", populacao2);

    if (populacao > populacao2){
        printf("Carta 1 (Espírito Santo) VENCEU!\n");
    } else {
        printf("Carta 2 (Bahia) VENCEU!\n");
    }
    */

//ÁREA DE COMPARAÇÃO DE CARTAS UTILIZANDO FUNÇÕES SWITCH E IF-ELSE

int atributo;
    printf("Comparação de Cartas:\n");
    printf("Escolha um Atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha:\n");
    scanf("%d", &atributo);

//Montagem da lógica de comparação das cartas 
    switch (atributo) {
    
    case 1:
        printf("Carta 1 - Espírito Santo x Carta 2 - Bahia\n");
        printf("POPULAÇÃO\n");
        printf("Carta 1 - %lu\n", populacao);
        printf("Carta 2 - %lu\n", populacao2);
    if (populacao == populacao2) {
        printf("EMPATE!\n");
    }
    else if (populacao > populacao2)
    {
        printf("Carta 1 Venceu!\n");
    } else{
        printf("Carta 2 Venceu!\n");
    }
     break;

    case 2:
        printf("Carta 1 - Espírito Santo x Carta 2 - Bahia\n");
        printf("ÁREA\n");
        printf("Carta 1 - %2.f\n", area);
        printf("Carta 2 - %2.f\n", area2);
    if (area == area2) {
        printf("EMPATE!\n");
    }
    else if (area > area2)
    {
        printf("Carta 1 Venceu!\n");
    } else{
        printf("Carta 2 Venceu!\n");
    }
     break;
    
    case 3:
        printf("Carta 1 - Espírito Santo x Carta 2 - Bahia\n");
        printf("PIB\n");
        printf("Carta 1 - %2.f\n", pib);
        printf("Carta 2 - %2.f\n", pib2);
    if (pib == pib2) {
        printf("EMPATE!\n");
    }
    else if (pib > pib2)
    {
        printf("Carta 1 Venceu!\n");
    } else{
        printf("Carta 2 Venceu!\n");
    }
     break;
     
    case 4:
        printf("Carta 1 - Espírito Santo x Carta 2 - Bahia\n");
        printf("NÚMERO DE PONTOS TURÍSTICOS\n");
        printf("Carta 1 - %d\n",turismo);
        printf("Carta 2 - %d\n",turismo2);
    if (turismo == turismo2) {
        printf("EMPATE!\n");
    }
    else if (turismo > turismo2)
    {
        printf("Carta 1 Venceu!\n");
    } else{
        printf("Carta 2 Venceu!\n");
    }
     break;

     case 5:
        printf("Carta 1 - Espírito Santo x Carta 2 - Bahia\n");
        printf("DENSIDADE DEMOGRÁFICA\n");
        printf("Carta 1 - %2.f\n",densidade);
        printf("Carta 2 - %2.f\n",densidade2);
    if (densidade == densidade2) {
        printf("EMPATE!\n");
    }
    else if (densidade < densidade2)
    {
        printf("Carta 1 Venceu!\n");
    } else{
        printf("Carta 2 Venceu!\n");
    }
     break;

    default:
        printf("Opção Invalida!\n");
        break;
    }






    return 0;
}