#include <stdio.h>

int main() {
    long long int total = 0;
    int N, i, check = 0, carneiros = 0;
    scanf("%d", &N);

    int carneiro[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &carneiro[i]);
        total += carneiro[i];
    }

    i = 0;
    while (1) {
        if (carneiro[i] % 2 != 0) {

            carneiro[i]--;
            carneiros++;
            i++;

            if(i > (N - 1)){

                break;
            }

            if (check < i){

                check = i;
            }

        }
        else if (carneiro[i] % 2 == 0)
         {
            if(carneiro[i] == 0){

                i--;
            }
            else {
                carneiro[i]--;
                i--; 
                carneiros++;
            }
             
        }
        if ((i < 0) || (i > (N - 1))){

            break;
        }
    }
    
    total = total - carneiros;
    printf("%d %lld\n", check + 1, total);

    return 0;
}
