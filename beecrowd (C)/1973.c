#include <stdio.h>
#include <string.h>

int main() {
    long long int N, i, total = 0;
    int check = 0;
    scanf("%lld", &N);

    long long int estrela[N], carneiro[N];
    long long int sum_jornada = 0, sum_carneiro = 0;
    memset(estrela, 0, sizeof (estrela));
    memset(carneiro, 0, sizeof (carneiro));

    for (i = 0; i < N; i++) {
        scanf("%lld", &carneiro[i]);
        estrela[i] = 0;
        total += carneiro[i];
    }

    i = 0;
    while (1) {
        if (carneiro[i] % 2 != 0) {

            estrela[i]++;
            carneiro[i]--;
            i++;

            if(i > N - 1){

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
                estrela[i]++;
                i--; 
            }
             
        }
        if ((i < 0) || (i > (N - 1))){

            break;
        }
    }
   
    for (i = 0; i < N; i++) {
        sum_jornada += estrela[i];
        sum_carneiro += carneiro[i];
    }

    printf("%lld %lld\n", sum_jornada, sum_carneiro);

    return 0;
}
