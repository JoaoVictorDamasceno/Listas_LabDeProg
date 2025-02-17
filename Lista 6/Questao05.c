#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <tamanho_vetor>\n", argv[0]);
        return 1;
    }
    int tamanho = atoi(argv[1]);
    float *vetor = (float *)malloc(tamanho * sizeof(float));
    srand(time(NULL));
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = (float)rand() / RAND_MAX;
        soma += vetor[i];
    }
    printf("Soma dos elementos: %.2f\n", soma);
    free(vetor);
    return 0;
}