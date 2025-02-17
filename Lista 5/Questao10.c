#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 7
#define TAM 14
int main() {
    int X[TAM], F[N] = {0};
    srand(time(NULL));
    for (int i = 0; i < TAM; i++) {
        X[i] = rand() % N;
        F[X[i]]++;
    }
    printf("Vetor X: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", X[i]);
    }
    printf("\nVetor F: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", F[i]);
    }
    printf("\n");
    return 0;
}