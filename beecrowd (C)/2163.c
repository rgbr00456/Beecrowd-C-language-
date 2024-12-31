#include <stdio.h>

int main(){

    int posLinha, posColuna;
    int qtsLinha, qtsColuna;
    int linha, coluna;

    scanf("%d %d", &qtsLinha, &qtsColuna);

    int matriz[qtsLinha][qtsColuna];

    for (linha = 0; linha < qtsLinha; linha++){

        for (coluna = 0; coluna < qtsColuna; coluna++){

            scanf("%d", &matriz[linha][coluna]);
        }
    }

    qtsLinha--; qtsColuna--;
    posLinha = posColuna = 0;

    for (linha = 1; linha < qtsLinha; linha++){

        for (coluna = 1; coluna < qtsColuna; coluna++){

            if (matriz[linha][coluna] == 42){

                if (matriz[linha - 1][coluna - 1] == 7 && matriz[linha - 1][coluna] == 7 && matriz[linha - 1][coluna + 1] == 7 && matriz[linha][coluna - 1] == 7 && matriz[linha][coluna + 1] == 7
						&& matriz[linha + 1][coluna - 1] == 7 && matriz[linha + 1][coluna] == 7 && matriz[linha + 1][coluna + 1] == 7){

                    posLinha = linha + 1;
                    posColuna = coluna + 1;
                }
            }

        }
    }

    if (posLinha == 0 && posColuna == 0)
        printf("%d %d\n", posLinha, posColuna);
    else
        printf("%d %d\n", posLinha, posColuna);

    return 0;
}