#include <stdio.h>
#include <math.h>

int main(){

    int T, N, i;
    unsigned long long int fib[61];

        fib[0] = 0;
        fib[1] = 1;

        for (i = 2; i<=60; i++){

            fib[i] = fib [i - 2] + fib [i-1];
    
        }

        scanf("%d", &T);
        for(i = 0; i<T; i++){

            scanf("%d", &N);
            printf("Fib(%d) = %llu\n", N, fib[N]);
        }


    return 0; 
}