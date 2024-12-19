#include <stdio.h>

int main(){

    int x, i;
    float nota1, nota2, nota3, media;

    scanf("%d", &x);

    for (i=0; i < x; i++){

        scanf("%f %f %f", &nota1, &nota2, &nota3);

        media = (((nota1*2)+(nota2*3)+(nota3*5))/10);

        printf("%.1f\n", media);
    }


    return 0;
}