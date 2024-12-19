#include <stdio.h>

// Definição do tamanho máximo de N conforme o problema (1 ≤ N ≤ 10^6)
#define MAX_N 1000000

// Declaração de arrays globais para evitar stack overflow
long long int carneiro[MAX_N];
int estrela[MAX_N];

int main() {
    long long int N, i;
    long long int sum_jornada = 0, sum_carneiro = 0;
    

    if (scanf("%lld", &N) != 1) {

        return 1;
    }

    if (N < 1 || N > MAX_N) {

        return 1;
    }


    for(i = 0; i < N; i++) {
        if (scanf("%lld", &carneiro[i]) != 1) {
            return 1;
        }
        estrela[i] = 0; 
    }

    i = 0;
    
    while(1) {

        if(carneiro[i] > 0) {

            int original_parity = carneiro[i] % 2;

            carneiro[i]--;


            if(estrela[i] == 0) {
                estrela[i] = 1;
            }


            if(original_parity == 1) {

                i++;
                if(i >= N) {
                    break; 
                }
            }
            else {

                i--;
                if(i < 0) {
                    break; 
                }
            }
        }
        else {
            i--;

            if(i < 0) {
                break; 
            }
        }
    }
    

    for(i = 0; i < N; i++) {
        sum_jornada += estrela[i];
        sum_carneiro += carneiro[i];
    }

    printf("%lld %lld\n", sum_jornada, sum_carneiro);
    
    return 0;
}
