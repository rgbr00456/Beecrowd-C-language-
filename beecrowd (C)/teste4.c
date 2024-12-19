#include <stdio.h>
#include <stdlib.h>

int main() {
    long long int N, i;
    if (scanf("%lld", &N) != 1) {
        // Tratamento de erro caso a leitura falhe
        fprintf(stderr, "Erro ao ler o valor de N.\n");
        return 1;
    }

    if (N < 0) {
        // Tratamento de erro caso N seja negativo
        fprintf(stderr, "N deve ser um valor não negativo.\n");
        return 1;
    }

    // Alocação dinâmica dos arrays
    long long int *estrela = (long long int *)malloc(N * sizeof(long long int));
    long long int *carneiro = (long long int *)malloc(N * sizeof(long long int));

    if (estrela == NULL || carneiro == NULL) {
        // Verificação se a alocação foi bem-sucedida
        fprintf(stderr, "Falha na alocação de memória.\n");
        free(estrela);
        free(carneiro);
        return 1;
    }

    long long int sum_jornada = 0, sum_carneiro = 0;

    // Leitura dos valores para o array carneiro e inicialização de estrela
    for (i = 0; i < N; i++) {
        if (scanf("%lld", &carneiro[i]) != 1) {
            fprintf(stderr, "Erro ao ler o valor de carneiro[%lld].\n", i);
            free(estrela);
            free(carneiro);
            return 1;
        }
        estrela[i] = 0;
    }

    i = 0;
    while (i >= 0 && i < N) {
        if (i == 0 && carneiro[i] % 2 == 0) {
            estrela[i] = 1;

            if (carneiro[i] > 0)
                carneiro[i]--;
            break;  
        }
        else if (i == N - 1 && carneiro[i] % 2 == 1) {
            carneiro[i]--;
            estrela[i] = 0;
            i++;  
        }
        else if (carneiro[i] % 2 == 0) {
            estrela[i] = 1;
            if (carneiro[i] > 0)
                carneiro[i]--;
            i--;  
        }
        else {
            i++;  
        }
    }

    // Cálculo das somas
    for (i = 0; i < N; i++) {
        sum_carneiro += carneiro[i];
        sum_jornada += estrela[i];
    }

    // Impressão do resultado
    printf("%lld %lld\n", sum_jornada, sum_carneiro);

    // Liberação da memória alocada
    free(estrela);
    free(carneiro);

    return 0;
}