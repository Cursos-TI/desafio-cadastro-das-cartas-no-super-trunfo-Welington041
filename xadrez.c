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

    unsigned long int populacao = 7740000;
    unsigned long int populacao2 = 5370000;

    float densidadepopulacional;
    float densidadepopulacional2;

    float pibpercapita;
    float pibpercapita2;

    float superpoder;
    float superpoder2;


    printf("Carta 1\n");
    printf("Estado: %c\n", estado);

    printf("Nome da CIdade: %s\n", nome);

    printf("Código: %s\n", codigo);

    printf("Área em km²: %.2fkm²\n", area);

    printf("PIB: %.3f bilhões\n", pib);

    printf("População: %ld\n", populacao);

    printf("Pontos Túristicos: %d\n", pontosturisticos);

    densidadepopulacional = (float) (populacao / area);
    
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional);

    pibpercapita = (float) (populacao / pib);
    
    printf("PIB per Capita: %.2f reais\n", pibpercapita);

    printf("Super Poder: %.3f\n", populacao + area + pib + pontosturisticos + pibpercapita / densidadepopulacional);


    printf("\n");


    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);

    printf("Nome da Cidade: %s\n", nome2);

    printf("Código: %s\n", codigo2);

    printf("Área em km²: %.2fkm²\n", area2);

    printf("PIB: %.3f bilhões\n", pib2);

    printf("População: %ld\n", populacao2);

    printf("Pontos Túristicos: %d\n", pontosturisticos2);

    densidadepopulacional2 = (float) (populacao2 / area2);
    
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);

    pibpercapita2 = (float) (populacao2 / pib2);
    
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    printf("Super Poder: %.3f\n", populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 / densidadepopulacional2);

    printf("\n");

    //Início da comparação
    printf("Comparação de Cartas:\n");

    printf("\n");

    //Comparação entre áreas
    if (area > area2) {

      printf("Carta 1 venceu!\n");
    }else {
      printf("Carta 2 venceu!\n");
    }
    printf("Carta 1 - Área em km² (cwb): %.2f km²\n", area);
    printf("Carta 2 - Área em km² (floripa): %.2f km²\n", area2);
  
    printf("\n");

    //Comparação entre PIBS
    if (pib > pib2) {

    printf("Carta 1 venceu!\n");
    }else {
    printf("Carta 2 venceu!\n");
    }
    printf("Carta 1 - PIB (cwb): %.3f bilhões\n", pib);
    printf("Carta 2 - PIB (floripa): %.3f bilhões\n", pib2);

    printf("\n");

    //Comparação entre populações
    if (populacao > populacao2) {

    printf("Carta 1 venceu!\n");
    }else {
    printf("Carta 2 venceu!\n");
    }
    printf("Carta 1 - População (cwb): %ld\n", populacao);
    printf("Carta 2 - População (floripa): %ld\n", populacao2);

    printf("\n");

    //Comparação entre pontos túristicos
    if (pontosturisticos > pontosturisticos2) {

    printf("Carta 1 venceu!\n");
    }else {
    printf("Carta 2 venceu!\n");
    }
    printf("Carta 1 - Pontos Túristicos (cwb): %d\n", pontosturisticos);
    printf("Carta 2 - Pontos Túristicos (floripa): %d\n", pontosturisticos2);

    printf("\n");

    //Comparação entre densidade populacioanl
    if (densidadepopulacional < densidadepopulacional2) {

      printf("Carta 1 venceu!\n");
    }else {
      printf("Carta 2 venceu!\n");
    }
    printf("Carta 1 - Densidade Populacional (cwb): %.2f hab/km²\n", densidadepopulacional);
    printf("Carta 2 - Densidade Populacional (floripa): %.2f hab/km²\n", densidadepopulacional2);

    printf("\n");

    //Comparação entre PIB per capita
    if (pibpercapita > pibpercapita2) {

      printf("Carta 1 venceu!\n");
    }else {
      printf("Carta 2 venceu!\n");
    }
    printf("Carta 1 - PIB per Capita (cwb): %.2f reais\n", pibpercapita);
    printf("Carta 2 - PIB per Capita (floripa): %.2f reais\n", pibpercapita2);

    printf("\n");

    //Comparação entre super poderes
    if (superpoder > superpoder2) {

      printf("Carta 1 venceu!\n");
    }else {
      printf("Carta 2 venceu!\n");
    }
    printf("Carta 1 - Super Poder (cwb): %.3f\n", populacao + area + pib + pontosturisticos + pibpercapita / densidadepopulacional);
    printf("Carta 2 - Super Poder (floripa): %.3f\n", populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 / densidadepopulacional2);


 return 0;
 
}