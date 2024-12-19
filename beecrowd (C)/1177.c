#include <stdio.h>

int main(){

    int N[1000], i, T;

    scanf("%d", &T);
    if (T >= 2 && T<=50){

        for (i=0; i<1000; i++){

            N[i] = i%T;
            printf("N[%d] = %d\n", i, N[i]);
        }
    }



    return 0; 
}