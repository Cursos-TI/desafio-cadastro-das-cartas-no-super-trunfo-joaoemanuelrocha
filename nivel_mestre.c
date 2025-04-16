#include <stdio.h>

int main() {
    char cadastro[25];
    char login[25];
    char estado[30];
    char carta1[20];
    char carta2[20];
    char cidade [30];
    unsigned long int populacao1, populacao2;
    int senha;
    int turisticos1, turisticos2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float capita1, capita2;
    float inverso1, inverso2;
    float calcular1, calcular2;
    float super1, super2;
    float poder1, poder2;
    float comparar1, comprar2;
    

    printf("Carta 1: \n");
    // Carta 1
    printf("Faça seu cadastro: \n");
    scanf("%s", &cadastro);
    // Cadastro do usuário
    printf("Coloque sua senha: \n");
    scanf("%d", &senha);
    // Senha do usuário
    printf("Digite seu estado: \n");
    scanf("%s", &estado);
    // Estado do usuário
    printf("Digite o código da carta: \n");
    scanf("%s", &carta1);
    // Código da carta do usuário
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);
    // Cidade do usuário
    printf("Digite o número de habitantes: \n");
    scanf("%u", &populacao1);
    // Número de habitantes da cidade do usuário
    printf("Digite a área: \n");
    scanf("%f", &area1);
    // Área da cidade do usuário
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    // PIB da cidade do usuário
    printf("Digite os pontos turísticos: \n");
    scanf("%d", &turisticos1);
    // Locais turísticos da cidade do usuário
    densidade1 = (float) (populacao1 / area1);
    printf("A densidade populacional é: %.3f hab/km²\n", densidade1);
    // Calculo para saber a densidade populacional
    capita1 = (float) (pib1 / populacao1);
    printf("O PIB per capita é: %.3f reais\n", capita1);
    // Calculo para saber o PIB per capita
    calcular1 = (float) (densidade1 + capita1);
    printf("O resultado do calculo de densidade populacional e pib per capita é: %f\n", calcular1);
    // Calculo de densidade populacional + o PIB per capita
    inverso1 = (float) (populacao1 / area1);
    printf("O inverso da densidade populacional é: %f\n", inverso1);
    // Calculo para saber o inverso da densidade populacional
    super1 = (float) (populacao1 + area1 + pib1 + turisticos1 + capita1 + inverso1);
    printf("O Super Poder é: %.4f\n", super1);
    // Calculo do super poder
    printf("populacao1 > area1: %u\n", populacao1 > area1);
    printf("populacao1 < area1: %u\n", populacao1 < area1);
    printf("populacao1 <= area1: %u\n", populacao1 <= area1);
    printf("populacao1 == area1: %u\n", populacao1 == area1);
    printf("populacao1 != area1: %u\n", populacao1 != area1);
    // Comparação de população com a área
    printf("pib1 > capita1: %d\n", pib1 > capita1);
    printf("pib1 < capita1: %d\n", pib1 < capita1);
    printf("pib1 <= capita1: %d\n", pib1 <= capita1);
    printf("pib1 == capita1: %d\n", pib1 == capita1);
    printf("pib1 != capita1: %d\n", pib1 != capita1);
    // Comparação de pib com o pib per capita
    printf("turistico1 > inverso1: %d\n", turisticos1 > inverso1);
    printf("turistico1 < inverso1: %d\n", turisticos1 < inverso1);
    printf("turistico1 <= inverso1: %d\n", turisticos1 <= inverso1);
    printf("turistico1 == inverso1: %d\n", turisticos1 == inverso1);
    printf("turistico1 != inverso1: %d\n", turisticos1 != inverso1);
    // Comparação de pontos turísticos com o inverso de densidade populacional


    printf("Carta 2: \n");
    // Carta 2
    printf("Faça seu login: \n");
    scanf("%s", &login);
    // Login do usuário
    printf("Coloque sua senha: \n");
    scanf("%d", &senha);
    // Senha do usuário
    printf("Digite seu estado: \n");
    scanf("%s", &estado);
    // Estado do usuário
    printf("Digite o código da carta: \n");
    scanf("%s", &carta2);
    // Código da carta do usuário
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);
    // Cidade do usuário
    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao2);
    // Número de habitantes da cidade do usuário
    printf("Digite a área: \n");
    scanf("%f", &area2);
    // Área da cidade do usuário
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    // PIB da cidade do usuário
    printf("Digite os pontos turísticos: \n");
    scanf("%d", &turisticos2);
     // Locais turísticos da cidade do usuário
     densidade2 = (float) (populacao2 / area2);
    printf("A densidade populacional é: %.3f hab/km²\n", densidade2);
    // Calculo para saber a densidade populacional
    capita2 = (float) (pib2 / populacao2);
    printf("O PIB per capita é: %.3f reais\n", capita2);
    // Calculo para saber o PIB per capita
    calcular2 = (float) (densidade2+ capita2);
    printf("O resultado do calculo de densidade populacional e pib per capita é: %f\n", calcular2);
    // Calculo de densidade populacional + o PIB per capita
    inverso2 = (float) (populacao2 / area2);
    printf("O inverso da densidade populacional é: %f\n", inverso1);
    // Calculo para saber o inverso da densidade populacional
    super2 = (float) (populacao2 + area2 + pib2 + turisticos2 + capita2 + inverso2);
    printf("O Super Poder é: %.4f\n", super2);
    // Calculo do super poder
    printf("populacao2 > área2: %u\n", populacao2 > area2);
    printf("populacao2< área2: %u\n", populacao2 < area2);
    printf("populacao2<= área2: %u\n", populacao2 <= area2);
    printf("populacao2 == área2: %u\n", populacao2 == area2);
    printf("populacao2 != área2: %u\n", populacao2 != area2);
    // Comparação de população com a área
    printf("pib2 > capita2: %d\n", pib2 > capita2);
    printf("pib2 < capita2: %d\n", pib2 < capita2);
    printf("pib2 <= capita2: %d\n", pib2 <= capita2);
    printf("pib2 == capita2: %d\n", pib2 == capita2);
    printf("pib2 != capita2: %d\n", pib2 != capita2);
    // Comparação de pib com o pib per capita
    printf("turístico2 > inverso2: %d\n", turisticos2 > inverso2);
    printf("turístico2 < inverso2: %d\n", turisticos2 < inverso2);
    printf("turístico2 <= inverso2: %d\n", turisticos2<= inverso2);
    printf("turístico2 == inverso2: %d\n", turisticos2== inverso2);
    printf("turístico2 != inverso2: %d\n", turisticos2 != inverso2);
    // Comparação de pontos turísticos com o inverso de densidade populacional

    printf("Comapração das cartas: \n");
    printf("População: Carta %d venceu(%d)\n", (populacao1 > populacao2 ? 1 : 2), (populacao1 > populacao2 ? 1 : 0));
    printf("Área: Carta %d venceu(%d)\n", (area1 > area2 ? 1 : 2), (area1 > area2 ? 1 : 0 ));
    printf("PIB: Carta %d venceu(%d)\n", (pib1 > pib2 ? 1 : 2), (pib1 > pib2 ? 1 : 0));
    printf("Pontos Turísticos: Carta %d venceu(%d)\n", (turisticos1 > turisticos2 ? 1 : 2), (turisticos1 > turisticos2 ? 1 : 0));
    printf("Densidade populacional: Carta %d venceu(%d)\n", (densidade1 > densidade2 ? 1 : 2), (densidade1 > densidade2 ? 1 : 0));
    printf("PIB per capita: Carta %d venceu(%d)\n", (capita1 > capita2 ? 1 : 2), (calcular1 > capita2 ? 1 : 0));
    printf("Super Poder: Carta %d venceu(%d)\n", (super1 > super2 ? 1 : 2), (super1 > super2 ? 1 : 0));
    return 0;
}