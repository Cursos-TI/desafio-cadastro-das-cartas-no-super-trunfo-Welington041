#include <stdio.h>

//Função recursiva da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1); 
}

//Função recursiva da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

//Função recursiva da Diagonal (Bispo)
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Diagonal direita pra cima\n");
    moverBispoRecursivo(casas - 1);
}

//Loops aninhados para o Bispo
void moverBispoLoop(int casas) {
    // Simula uma movimentação diagonal utilizando loops aninhados
    for (int vertical = 0; vertical < casas; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Diagonal direita pra cima (loop)\n");
        }
    }
}

//Movimento do Cavalo (L invertido: 2 cima, 1 direita)
void moverCavalo(int movimentos) {
    int movimentosRealizados = 0;

    for (int i = 0; i < 3; i++) {          
        for (int j = 0; j < 3; j++) {
            if (movimentosRealizados >= movimentos)
                break;

            if (i == 2 && j == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                movimentosRealizados++;
                continue;
            }
        }
    }
}

int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentoscavalo = 1;
    int opcao;

        //Menu interativo de opçãoes
        printf("Escolha uma opçao de peça! \n");
        printf("1. Torre \n");
        printf("2. Bispo (Recursivo) \n");
        printf("3. Bispo (Loops) \n");
        printf("4. Rainha \n");
        printf("5. Cavalo \n");
        printf("6. Sair \n");
        printf("Digite a opção desejada! \n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // Movimento da Torre
                printf("Movimento da Torre: \n");
                moverTorre(casasTorre);
                printf("\n");
            
            break;

            case 2:
                // Movimento do Bispo
                printf("Movimento do Bispo (Recursivo): \n");
                moverBispoRecursivo(casasBispo);
                printf("\n");
            
            break;

            case 3:
                // Movimento Bispo        
                printf("Movimento do Bispo (Loops Aninhados): \n");
                moverBispoLoop(casasBispo);
                printf("\n");
                break;

            case 4:
                // Movimento da Rainha
                printf("Movimento da Rainha: \n");
                moverRainha(casasRainha);
                printf("\n");
            break;

            case 5:
            // Movimento do Cavalo
            printf("Movimento do Cavalo: \n");
            moverCavalo(movimentoscavalo);
            printf("\n");
            break;

            case 6:
            printf("Saindo...\n");
            break;

            default:
            printf("Opção inválida. Por favor, escolha um número entre 1 e 6. \n");

        }

    return 0;
}