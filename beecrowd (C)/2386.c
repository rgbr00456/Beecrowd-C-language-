#include <stdio.h>

int main(){

    int i, A, N, F; // A = área do telescópio e N = número de estrelas
    scanf("%d", &A); // lê a área do telescópio
    scanf("%d", &N); // lê o número de estrelas 

    int fluxo[N]; // fluxo = vetor para armazenar o fluxo de fótons de cada estrela
    int count = 0; // contador de estrelas percepitíveis

    int necessidade = 40000000; // núemero de fótons necessários para uma estrela ser perceptível

    for (i = 0; i< N; i++){ // lê o fluxo de fótons para cada estrela e armazena no vetor

        scanf("%d", &fluxo[i]);
    }

    for (i = 0; i < N; i++){ // verifica se a estrela é perceptível e processa cada estrela

        int captado =  fluxo[i] * A;

        if (captado >= necessidade){ 

            count++;
        }

    }

    printf("%d\n", count); // imprime o número de estrelas perceptíveis

    return 0; 
}