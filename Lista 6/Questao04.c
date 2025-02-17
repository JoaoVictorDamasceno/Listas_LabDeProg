#include <stdio.h>
#include <stdlib.h>
void normalizar(int *vetor, int tamanho) {
    int min = vetor[0], max = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < min) min = vetor[i];
        if (vetor[i] > max) max = vetor[i];
    }
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = (vetor[i] - min) / (max - min);
    }
}
int main() {
    int vetor[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    normalizar(vetor, tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}