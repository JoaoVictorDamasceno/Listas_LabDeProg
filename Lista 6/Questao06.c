#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int main() {
    int tamanho = 10;
    int vetor[tamanho];
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100;
    }
    qsort(vetor, tamanho, sizeof(int), comparar);
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    float media = soma / tamanho;
    float mediana = (vetor[tamanho / 2] + vetor[(tamanho / 2) - 1]) / 2.0;
    printf("Média: %.2f\n", media);
    printf("Mediana: %.2f\n", mediana);
    return 0;
}