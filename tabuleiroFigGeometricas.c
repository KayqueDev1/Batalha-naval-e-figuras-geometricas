#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main () {

    char linha [10] = {'A','B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int j, i;
    int tabuleiro [LINHA][COLUNA];

    // Inicializando o tabuleiro com zeros
    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // ========== DESENHANDO FIGURAS ==========
    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){

            // CONE (no topo esquerdo)
            if ((i == 2 && j <= 4) ||          // base do cone
                (i == 1 && j >= 1 && j <= 3) || // meio
                (i == 0 && j == 2))             // topo
            {
                tabuleiro[i][j] = 3;
            }

            // CRUZ (centro do tabuleiro)
            else if ((i == 4 && j >= 5 && j <= 9) ||  // parte horizontal
                     (j == 7 && i >= 2 && i <= 7))    // parte vertical
            {
                tabuleiro[i][j] = 2;
            }

            // OCTAEDRO (abaixo e à esquerda)
            else if ((i == 6 && j <= 4) ||                     // base inferior
                     (i == 5 && j >= 1 && j <= 3) ||           // meio inferior
                     (i == 4 && j == 2) ||                     // ponta inferior
                     (i == 7 && j >= 1 && j <= 3) ||           // meio superior
                     (i == 8 && j == 2))                       // topo
            {
                tabuleiro[i][j] = 5;
            }
        }
    }

    // ========== EXIBINDO O TABULEIRO ==========
    printf("========== BATALHA NAVAL =============\n");
    printf("   ");

    for(i = 0; i < LINHA; i++){
        printf("%d ", i + 1);
    }

    printf("\n");

    for (i = 0; i < COLUNA; i++){
        printf("%2c ", linha[i]);

        for (j = 0; j < LINHA; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
