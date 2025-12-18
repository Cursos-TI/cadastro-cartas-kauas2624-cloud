#include <stdio.h>

int main() {
    // --- DADOS DA CARTA 1: SALVADOR ---
    char estado1[50] = "Bahia";
    char codigo1[10] = "A01";
    char cidade1[50] = "Salvador";
    unsigned int pop1 = 2418005;
    float area1 = 693.83;
    double pib1 = 62750000000.00;
    float densidade1 = (float)pop1 / area1;
    float pibCapita1 = (float)(pib1 / pop1);

    // --- DADOS DA CARTA 2: ILHÉUS ---
    char estado2[50] = "Bahia";
    char codigo2[10] = "A02";
    char cidade2[50] = "Ilhéus";
    unsigned int pop2 = 178703;
    float area2 = 1584.69;
    double pib2 = 5200000000.00;
    float densidade2 = (float)pop2 / area2;
    float pibCapita2 = (float)(pib2 / pop2);

    // --- SAÍDA DE DADOS (EXIBIÇÃO FORMATADA) ---
    
    printf("==========================================\n");
    printf("           SUPER TRUNFO: CIDADES          \n");
    printf("==========================================\n\n");

    // Exibição da Carta 1
    printf("CARTA 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %u hab\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibCapita1);

    printf("\n------------------------------------------\n\n");

    // Exibição da Carta 2
    printf("CARTA 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %u hab\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibCapita2);

    printf("==========================================\n");

    return 0;
}