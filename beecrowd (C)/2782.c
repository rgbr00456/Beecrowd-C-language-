#include <stdio.h>

int main(){

    int N, j;

    scanf("%d", &N);

    int seq[N];

    for (int i = 0; i < N; i++){

        scanf("%d", &seq[i]);

    }

    int escadinhas = 0;
    int i = -1;

    while (i < N - 1){

        j = i + 1;
        int d = seq[j] - seq [i];

        while (j < N && seq[j] -  seq[j - 1] == d){

            j++;
        }

        if ( j - i > 2){

            escadinhas++;
        }

        i++;

    }

    printf("%d\n", escadinhas);


    return 0; 
}