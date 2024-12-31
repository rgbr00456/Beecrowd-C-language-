#include <stdio.h>

int main(){

    int i, N, Ax, Bx, Cx, Dx, Ay, By, Cy, Dy, Rx, Ry;

    scanf("%d", &N);

    for (i = 0; i < N; i++){

        scanf("%d %d %d %d %d %d %d %d %d %d", &Ax, &Ay, &Bx, &By, &Cx, &Cy, &Dx, &Dy, &Rx, &Ry);

        printf("%d\n", Ax <= Rx && Dx <= Rx &&
                            Rx <= Bx && Rx <= Cx &&
                            Ay <= Ry && By <= Ry &&
                            Ry <= Cy && Ry <= Dy);
    }

    return 0; 
}