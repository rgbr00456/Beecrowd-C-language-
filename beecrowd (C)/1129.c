#include <stdio.h>

int main(){

    int n, i, j;
    int a, b, c, d, e;

    // Inicialização correta do vetor de alternativas com caracteres literais
    char alternativas[5] = {'A', 'B', 'C', 'D', 'E'};

    // Loop principal com condição correta
    while (1) {

        // Ler o número de questões
        if(scanf("%d", &n) != 1){
            break; // Finaliza se não conseguir ler 'n'
        }

        // Verificar condição de término
        if (n == 0){
            break; // Finaliza se 'n' for zero
        }

        // Processar cada questão individualmente
        for (i = 0; i < n; i++){

            // Ler os cinco valores de nível de cinza
            if(scanf("%d %d %d %d %d", &a, &b, &c, &d, &e) != 5){

                printf("*\n"); // Imprime '*' para questões inválidas

                // Limpar o buffer até o fim da linha para evitar erros na próxima leitura
                int ch;
                while((ch = getchar()) != '\n' && ch != EOF);
                continue; // Passa para a próxima questão
            }

            // Armazenar os valores lidos em um vetor
            int valores[5] = {a, b, c, d, e};
            int marcados[5];
            int count = 0;

            // Verificar quais alternativas estão marcadas (preto)
            for (j = 0; j < 5; j++){
                if (valores[j] <= 127){
                    marcados[count++] = j;
                }
            }

            // Determinar e imprimir a resposta
            if (count == 1){
                printf("%c\n", alternativas[marcados[0]]);
            }
            else {
                printf("*\n");
            }
        }
    }

    return 0; 
}
