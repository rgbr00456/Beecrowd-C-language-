#include <stdio.h>
#include <string.h>

int main(){

    int bilhetes [10001];
    int i, M, N, T, resposta;

    while(scanf("%d %d", &N, &M)){

        if (!N && !M) break;

        resposta = 0;
        memset(bilhetes, 0, sizeof(bilhetes));

        for(i = 0; i < M; i++){

            scanf("%d", &T);
            ++bilhetes[T];
            if (bilhetes[T] == 2) ++resposta;

        }

        printf("%d\n", resposta);

    }

    return 0;
}