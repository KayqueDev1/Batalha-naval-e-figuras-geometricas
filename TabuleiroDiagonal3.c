#include <stdio.h>


int main () {

    char linha [10] = {'A','B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int j, i;
    int navio1 [5][2] = {{0,0}, {1,1}, {2,2}, {3,3}, {4,4}};
    int navio2 [5][2] = {{4,5}, {3,6}, {2,7}, {1,8}, {0,9}};
    int tabuleiro [10][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};



    // Aqui estou criando um loop for onde ele capita as cordenadas do navio1 e navio2 dentro da variavel

       for ( i = 0; i < 5; i++){
    tabuleiro[navio1[i][0]][navio1[i][1]] = 3;
    }

      for ( i = 0; i < 5; i++){
    tabuleiro[navio2[i][0]][navio2[i][1]] = 3;
    }

    //iniciando o progama com o cabeçalho e o tabuleiro 10x10

    printf("==========BAtALHA NAVAL=============\n");

printf("   ");
      for(i = 0; i < 10; i++){
    printf("%d ", i + 1);
}

printf("\n");

      for (i = 0; i < 10; i++){
    printf("%2c ", linha [i]);


      for (j = 0; j < 10; j++){
    printf("%d ", tabuleiro[i][j]);
}

printf("\n");

}

return 0;

}