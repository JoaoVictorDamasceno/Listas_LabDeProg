#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int N = 5;
    int M[N][N];
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            M[i][j] = rand() % 100;
        }
    }
    int soma = 0;
    for (int i = 0; i < N; i++) {
        soma += M[i][i];
    }
    printf("Somatório da diagonal principal: %d\n", soma);
    printf("O somatório é %s.\n", soma % 2 == 0 ? "par" : "ímpar");
    return 0;
}