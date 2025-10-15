#include <stdio.h>

void imprime_tabuleiro() {
    int i, j;
    char tabuleiro[10][10];

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = '~';
        }
    }

   printf("      "); 
    for (char coluna = 'A'; coluna <= 'J'; coluna++) {
        printf("%c    ", coluna);
    }

    printf("\n\n");
    for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1);

        for (j = 0; j < 10; j++) {
            printf("%4c ", tabuleiro[i][j]);
        }
        printf("\n\n");
    }
}



int main (void){
    imprime_tabuleiro();
    return 0;
}