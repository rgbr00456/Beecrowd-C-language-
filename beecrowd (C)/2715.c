#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int N, X, i; 

    while (scanf("%d", &N) != EOF) {
       
        int trabalhos [N];
        long long soma_total = 0, soma_rangel = 0;

        for (i = 0; i < N; i++){

            scanf("%d", &trabalhos[i]);
            soma_total += trabalhos[i];
        }

        long long menor_diferenca = soma_total;

        for (i = 0; i < N - 1; i++){

            soma_rangel += trabalhos[i];
            long long soma_gugu = soma_total - soma_rangel; 
            long long diferenca = llabs(soma_rangel - soma_gugu);

            if (diferenca < menor_diferenca){

                menor_diferenca =  diferenca; 
            }
        }

        printf("%lld\n", menor_diferenca);
        
    }
    
    return 0; 
}