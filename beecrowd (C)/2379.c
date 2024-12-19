#include <stdio.h>

int main(){

    int M, N, X;
    int i, j;

    scanf("%d", &N); // escaneia o total de figurinhas
    scanf("%d", &M); // total de figurinhas compradas

    int compradas [N + 1]; //vetor para quais fig já foram compradas

    for (i = 1; i<= N; i++ ){ 

        compradas [i] = 0;
    }

    for (i = 1; i <= M; i++){ //leitura das figurinhas compradas

        scanf("%d", &X);
        compradas[X] = 1;
    }

    int faltando = 0;
    for (i = 1; i<= N; i++){ //para caso a fig não tenha sido comprada

        if (compradas [i] == 0){

            faltando++;
        }
    }

    printf("%d\n", faltando);


    return 0;
}