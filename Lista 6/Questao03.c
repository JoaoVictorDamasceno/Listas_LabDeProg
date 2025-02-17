#include <stdio.h>
#include <stdlib.h>
void encontrarMenorMaior(int *vetor, int tamanho, int **enderecos) {
    int *menor = &vetor[0];
    int *maior = &vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < *menor) menor = &vetor[i];
        if (vetor[i] > *maior) maior = &vetor[i];
    }
    enderecos[0] = menor;
    enderecos[1] = maior;
}
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
    int *enderecos[2];
    encontrarMenorMaior(vetor, tamanho, enderecos);
    printf("Endereço do menor elemento: %p\n", (void*)enderecos[0]);
    printf("Endereço do maior elemento: %p\n", (void*)enderecos[1]);
    free(vetor);
    return 0;
}