#include <stdio.h>
#include <stdbool.h>

int main() {
    int N, C, M;

    // lê valores de entrada
    scanf("%d %d %d", &N, &C, &M);

    int carimbadas[C];
    int compradas[M];
    bool coladas_carimbadas[C]; // Marca quais figurinhas carimbadas já foram coladas

    // Inicializa o vetor para verificar figurinhas carimbadas coladas
    for (int i = 0; i < C; i++) {
        coladas_carimbadas[i] = false;
    }

    // Leitura das figurinhas carimbadas
    for (int i = 0; i < C; i++) {
        scanf("%d", &carimbadas[i]);
    }

    // Leitura das figurinhas compradas
    for (int i = 0; i < M; i++) {
        scanf("%d", &compradas[i]);
    }

    // Verifica quais figurinhas carimbadas já foram coladas
    for (int i = 0; i < C; i++) {
        for (int j = 0; j < M; j++) {
            if (carimbadas[i] == compradas[j]) {
                coladas_carimbadas[i] = true;
                break; // Não precisa verificar mais figurinhas compradas para esta carimbada
            }
        }
    }

    // Conta as figurinhas carimbadas que ainda faltam
    int faltam = 0;
    for (int i = 0; i < C; i++) {
        if (!coladas_carimbadas[i]) {
            faltam++;
        }
    }

    // Imprime o resultado
    printf("%d\n", faltam);

    return 0;
}
