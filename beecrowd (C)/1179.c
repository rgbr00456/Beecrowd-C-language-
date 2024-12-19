#include <stdio.h>

int main() {
    int par[5], impar[5], j, i, P = 0, I = 0, x;

    for (i = 0; i < 15; i++) {
        scanf("%d", &x);

        // Verifica se o número é par
        if (x % 2 == 0) {
            par[P] = x;
            P++;

            // Se já preencheu o vetor par, imprime e reinicia o índice
            if (P == 5) {
                for (j = 0; j < 5; j++) {
                    printf("par [%d] = %d\n", j, par[j]);
                }
                P = 0;  // Reinicia o índice para o próximo grupo de números
            }
        } else {
            // Verifica se o número é ímpar
            impar[I] = x;
            I++;

            // Se já preencheu o vetor impar, imprime e reinicia o índice
            if (I == 5) {
                for (j = 0; j < 5; j++) {
                    printf("impar [%d] = %d\n", j, impar[j]);
                }
                I = 0;  // Reinicia o índice para o próximo grupo de números
            }
        }
    }

    // Imprime os números ímpares restantes
    for (j = 0; j < I; j++) {
        printf("impar [%d] = %d\n", j, impar[j]);
    }

    // Imprime os números pares restantes
    for (j = 0; j < P; j++) {
        printf("par [%d] = %d\n", j, par[j]);
    }

    return 0;
}
