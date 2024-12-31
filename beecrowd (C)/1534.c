#include <stdio.h>

int main(){

    int tamanho, linha, coluna;

    while (scanf("%d", &tamanho) != EOF){

        int matriz[tamanho][tamanho];

        for (linha = 0; linha < tamanho; linha++)
            for (coluna = 0; coluna < tamanho; coluna++){

                if (linha == coluna)
                    matriz[linha][coluna] = 1;
                if (linha == tamanho - coluna - 1)
                    matriz[linha][coluna] = 2;
                if (linha != coluna && linha != tamanho - coluna -1)
                    matriz[linha][coluna] = 3;
            }

        for (linha = 0; linha < tamanho; linha++){

            for (coluna = 0; coluna < tamanho; coluna++){

                printf("%d", matriz[linha][coluna]);
            }
            printf("\n");
        }
            
    }
    return 0; 
}