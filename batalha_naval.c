#include <stdio.h>

void imprime_tabuleiro(){
    
    int i, j;
    char tabuleiro[10][10];

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            tabuleiro[i][j] = '~';
        }
    }

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            printf("  %c", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main (void){
    imprime_tabuleiro();
    return 0;
}