#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int N = 7;
    int TAM = 14;
    int X[TAM], Y[TAM], M[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            M[i][j] = 0;
        }
    }
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