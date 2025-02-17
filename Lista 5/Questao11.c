#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 7
#define TAM 14
int main() {
    int X[TAM], Y[TAM], M[N][N] = {0};
    srand(time(NULL));
    for (int i = 0; i < TAM; i++) {
        X[i] = rand() % N;
        Y[i] = rand() % N;
        M[X[i]][Y[i]]++;
    }
    printf("Matriz M:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}