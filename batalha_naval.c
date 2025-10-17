#include <stdio.h>

void inicia_tabuleiro(char tabuleiro[10][10]){
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = '~';
        }
    }
}

void imprime_tabuleiro(char tabuleiro[10][10]) {
    int i, j;
    
    //inicia_tabuleiro(tabuleiro);

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


void marca_barco(char tabuleiroMarcado [10][10]){
    //int i, j;
    int posicao;
    int numero;
    int linha, coluna;
    char letra; //x e y nas coordenadas

    inicia_tabuleiro(tabuleiroMarcado);


    printf("Digite 1 para posiçao Horizontal ou 2 para Vertical. Digite fim para encerrar\n");
    while (scanf("%d", &posicao)){
        printf("Digite as coordenadas do barco:");
        scanf("%d %c", &numero, &letra);

        linha = numero - 1;
        coluna = letra - 'A';

        if (posicao == 1){
            tabuleiroMarcado[linha][coluna] = '<';
            tabuleiroMarcado[linha][coluna+1] = ')';
            tabuleiroMarcado[linha][coluna+2] = ')';
        }

        if (posicao == 2){
            tabuleiroMarcado[linha][coluna] = '^';
            tabuleiroMarcado[linha+1][coluna] = 'U';
            tabuleiroMarcado[linha+2][coluna] = 'U';
        }
    }
    imprime_tabuleiro(tabuleiroMarcado);
}

int main (void){
    char tabuleiro[10][10];
    inicia_tabuleiro(tabuleiro);
    imprime_tabuleiro(tabuleiro);
    marca_barco(tabuleiro);
    return 0;
}