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

       int opcao;


       printf("Carta 1\n");
       printf("Estado: %c\n", estado);

       printf("Nome da Cidade: %s\n", nome);

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

       //Menu interativo de opçôes
       printf("Escolha uma das opçôes para comparar as cartas!\n");
       printf("1. Nome do País\n");
       printf("2. População\n");
       printf("3. Área em km²\n");
       printf("4. PIB\n");
       printf("5. Número de Pontos Turísticos\n");
       printf("6. Densidade Demográfica\n");
       printf("7. Sair\n");
       printf("Digite a opção desejada: ");
       scanf("%d", &opcao);

       switch (opcao) {
        case 1:
            printf("Comparando os Nomes dos Países!\n");
            printf("Curitiba: %s\n", nome);
            printf("Florianópolis: %s\n", nome2);
            printf("ERRO, escolha outra opção, países não são comparáveis!\n");
            break;
         
        case 2:
           printf("Comparando População!\n");
           printf("Curitiba: %lu\n", populacao);
           printf("Florianópolis: %lu\n", populacao2);
           if (populacao > populacao2) {
             printf("Curitiba venceu!\n");
           } else if (populacao < populacao2) {
              printf("Florianópolis venceu!\n");
           } else {
              printf("Empate!\n");
           }
           break;
         
           case 3:
           printf("Comparando Área!\n");
           printf("Curitiba: %.2f km²\n", area);
           printf("Florianópolis: %.2f km²\n", area2);
           if (area > area2) {
             printf("Curitiba venceu!\n");
           } else if (area < area2) {
              printf("Florianópolis venceu!\n");
           } else {
              printf("Empate!\n");
           }
           break;           

        case 4:
           printf("Comparando PIB!\n");
           printf("Curitiba: %.2f Bilhões\n", pib);
           printf("Florianópolis: %.2f Bilhões\n", pib2);
           if (pib > pib2) {
             printf("Curitiba venceu!\n");
           } else if (pib < pib2) {
              printf("Florianópolis venceu!\n");
           } else {
              printf("Empate!\n");
           }
           break;
           
           case 5:
           printf("Comparando Pontos Turísticos!\n");
           printf("Curitiba: %d\n", pontosturisticos);
           printf("Florianópolis: %d\n", pontosturisticos2);
           if (pontosturisticos > pontosturisticos2) {
             printf("Curitiba venceu!\n");
           } else if (pontosturisticos < pontosturisticos2) {
              printf("Florianópolis venceu!\n");
           } else {
              printf("Empate!\n");
           }
           break;
                      

        case 6:
           printf("Comparando a Densidade Demográfica!\n");
           printf("Curitiba: %.2f habitantes por km²\n", densidadepopulacional);
           printf("Florianópolis: %.2f habitantes por km²\n", densidadepopulacional2);
           if (densidadepopulacional < densidadepopulacional2) {
             printf("Curitiba venceu!\n");
           } else if (densidadepopulacional > densidadepopulacional2) {
             printf("Florianópolis venceu!\n");
           } else {
               printf("Empate!\n");
           }
           break;

        case 7:
           printf("Saindo...\n");
           break;
           
        default:
           printf("opção inválida. Por favor, escolha uma opção entre 1 e 7.\n");

       }

    return 0;
    
   }