#include <stdio.h>

int main(){  // Carta 1 e 2
    // Carta 1
    char estado = 'C';
    char estado2 = 'F';

    char codigo[5] = "A01";
    char codigo2[5] = "B01";

    char nome[20] = "Curitiba";
    char nome2[20] = "Florianópolis";

    float area = 432;
    float area2 = 675.4;

    float pib = 13.300;
    float pib2 = 23.550;

    int pontosturisticos = 30;
    int pontosturisticos2 = 15;

    int populacao = 7740000;
    int populacao2 = 5370000;

    float densidadepopulacional;
    float densidadepopulacional2;

    float pibpercapita;
    float pibpercapita2;


    printf("Carta 1\n");
    printf("Estado: %c\n", estado);

    printf("Nome da CIdade: %s\n", nome);

    printf("Código: %s\n", codigo);

    printf("Área em km²: %.2fkm²\n", area);

    printf("PIB: %.3f bilhões\n", pib);

    printf("População: %d\n", populacao);

    printf("Pontos turísticos: %d\n", pontosturisticos);

    densidadepopulacional = (float) (populacao / area);

    printf("Densidade Populacional: %.2F hab/km²\n", densidadepopulacional);

    pibpercapita = (float) (populacao / pib);

    printf("PIB per Capita: %.2f reais\n", pibpercapita);

    printf("\n");

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);

    printf("Nome da Cidade: %s\n", nome2);

    printf("Código: %s\n", codigo2);

    printf("Área em km²: %.2fkm²\n", area2);

    printf("PIB: %.3f bilhões\n", pib2);

    printf("População: %d\n", populacao2);

    printf("Pontos túristicos: %d\n", pontosturisticos2);

    densidadepopulacional2 = (float) (populacao2 / area2);

    printf("Densidade Populacional: %.2F hab/km²\n", densidadepopulacional2);

    pibpercapita2 = (float) (populacao2 / pib2);

    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

 return 0;
 
}