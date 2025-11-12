#include <stdio.h>

int main(){

    char linha [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int  j, i;
    int navio1 [3][3] = {{3,2},
                         {3,3},  // Navio da verical
                         {3,4}};
                          
    int navio2 [3][3] = {{3,6},
                         {4,6}, // Navio da horizontal
                         {5,6}}; 
                         
    int  tabuleiro[10][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

                            
// Aqui estou insirindo a frota de navil

tabuleiro[navio1[0][0]][navio1[0][1]] = 3;
tabuleiro[navio1[1][0]][navio1[1][1]] = 3;
tabuleiro[navio1[2][0]][navio1[2][1]] = 3;


tabuleiro[navio2[0][0]][navio2[0][1]] = 3;
tabuleiro[navio2[1][0]][navio2[1][1]] = 3;
tabuleiro[navio2[2][0]][navio2[2][1]] = 3;




   // 1. Iniciando o jogo com o usuario
    printf("=========BATALHA NAVAL=========\n");


printf("\n  "); // serve para dar  o espaço na priemira linha onde vai serinserido os numeros do tabu



   // 2. Aqui estou crinado a linha de numeros com o espaço a cima 

for (i = 0; i < 10; i++) {
    printf("%2d ", i + 1);
}

printf("\n"); //prroxima linha de baixo 



   // 3. coluna de letras

for (i = 0; i < 10; i++) {
    printf("%c ", linha[i]);  // Aqui estou inportando os valores do %c "char" na coluna "i"


   // 4. importando a tabela 10x10

    for (j = 0; j < 10; j++) {
        printf("%2d ", tabuleiro[i][j]); // imprime os valores da linha [i] (horizontal) e [j] (vertical)
    }
    printf("\n");
}


    return 0;
}