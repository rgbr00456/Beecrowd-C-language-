#include <stdio.h>

int main(){
    
    double N[100], x;
    int i;

    scanf("%lf", &x);
    N[0] = x;
    printf("N[%d] = %.4lf\n", 0, N[0]);

    for (i = 1; i <= 99; i++){

        x = x/2;
        N[i] = x;
        printf("N[%d] = %.4lf\n", i, N[i]);
    }


    return 0; 
}