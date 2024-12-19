#include <stdio.h>

int main(){

    int n, soma = 0;

    do{
        printf("Digite um numero: \n");
        scanf("%d", &n);
        soma += n;

    } while(n != 0);

    printf("Soma total = %d\n", soma);

return 0;
}