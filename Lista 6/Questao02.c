#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <tamanho_vetor>\n", argv[0]);
        return 1;
    }
    int tamanho = atoi(argv[1]);
    int *vetor = (int *)malloc(tamanho * sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100;
    }
    int *menor = &vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < *menor) {
            menor = &vetor[i];
        }
    }
    printf("Endereço do menor elemento: %p\n", (void*)menor);
    free(vetor);
    return 0;
}