#include <stdio.h>

#define TAM 10
#define NAVIO 3
#define AGUA 0
#define NAVIO_VAL 3
#define HABILIDADE 5

// Função para verificar se a posição está dentro dos limites
int dentroDosLimites(int linha, int coluna) {
    return linha >= 0 && linha < TAM && coluna >= 0 && coluna < TAM;
}

// Função para verificar se pode colocar navio
int podeColocarNavio(int tabuleiro[TAM][TAM], int linha, int coluna, int dLinha, int dColuna) {
    for (int i = 0; i < NAVIO; i++) {
        int l = linha + i * dLinha;
        int c = coluna + i * dColuna;
        if (!dentroDosLimites(l, c) || tabuleiro[l][c] != AGUA)
            return 0;
    }
    return 1;
}

// Coloca o navio no tabuleiro
void colocarNavio(int tabuleiro[TAM][TAM], int linha, int coluna, int dLinha, int dColuna) {
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linha + i * dLinha][coluna + i * dColuna] = NAVIO_VAL;
    }
}

// Gera matriz de cone (5x5), apontando para baixo
void gerarMatrizCone(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = 0;
            if (i >= j - 2 && i >= 2 - j && i >= 0) {
                matriz[i][j] = 1;
            }
        }
    }
}

// Gera matriz de cruz (5x5), centro na posição [2][2]
void gerarMatrizCruz(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 2 || j == 2)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
}

// Gera matriz de octaedro (losango 5x5)
void gerarMatrizOctaedro(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i - 2) + (j - 2) <= 2)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
}

// Aplica matriz de habilidade ao tabuleiro, centralizando no ponto de origem
void aplicarHabilidade(int tabuleiro[TAM][TAM], int origemLinha, int origemColuna, int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] == 1) {
                int l = origemLinha + i - 2;  
                int c = origemColuna + j - 2;
                if (dentroDosLimites(l, c) && tabuleiro[l][c] != NAVIO_VAL) {
                    tabuleiro[l][c] = HABILIDADE;
                }
            }
        }
    }
}

// Exibe o tabuleiro
void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    printf("   ");
    for (int col = 1; col <= TAM; col++) {
        printf("%2d ", col);
    }
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%c  ", 'A' + i); 
        for (int j = 0; j < TAM; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAM][TAM] = {0};

    
    if (podeColocarNavio(tabuleiro, 9, 3, 0, 1)) // Horizontal
        colocarNavio(tabuleiro, 9, 3, 0, 1);

    if (podeColocarNavio(tabuleiro, 7, 8, 1, 0)) // Vertical
        colocarNavio(tabuleiro, 7, 8, 1, 0);

    if (podeColocarNavio(tabuleiro, 6, 4, 1, 1)) // Diagonal principal
        colocarNavio(tabuleiro, 6, 4, 1, 1);

    if (podeColocarNavio(tabuleiro, 6, 5, 1, 1)) // Diagonal secundária
        colocarNavio(tabuleiro, 6, 5, 1, 1);

    
    int cone[5][5], cruz[5][5], octaedro[5][5];
    gerarMatrizCone(cone);
    gerarMatrizCruz(cruz);
    gerarMatrizOctaedro(octaedro);

    
    aplicarHabilidade(tabuleiro, 2, 2, cone);       // Cone no centro-esquerda
    aplicarHabilidade(tabuleiro, 7, 2, cruz);       // Cruz no canto inferior
    aplicarHabilidade(tabuleiro, 2, 7, octaedro);   // Octaedro no topo-direito

    
    exibirTabuleiro(tabuleiro);

    return 0;
}