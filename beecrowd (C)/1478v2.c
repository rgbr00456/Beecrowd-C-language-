#include <stdio.h>

int main() {
    unsigned short int tamanho, linha, coluna;

    while (1) {
        scanf("%hd", &tamanho);
        if (tamanho == 0) {
            break;
        }
        
        short matriz[tamanho][tamanho];

        for (linha = 0; linha < tamanho; linha++) {
            for (coluna = 0; coluna < tamanho; coluna++) {
                if (linha == coluna)
                    matriz[linha][coluna] = 1;
                else if (linha < coluna)
                    matriz[linha][coluna] = coluna - linha + 1;
                else  
                    matriz[linha][coluna] = linha - coluna + 1;
            }
        }


        for (linha = 0; linha < tamanho; linha++) {
            for (coluna = 0; coluna < tamanho; coluna++) {

                printf(" %3hd ", matriz[linha][coluna]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
