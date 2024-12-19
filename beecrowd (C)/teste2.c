#include <stdio.h>

int main(){

    int n, soma =0;

    while (n != 0){

        printf("Digite um numero: \n");
        scanf("%d", &n);
        soma += n;
    }

    printf("Soma total = %d\n", soma);
}