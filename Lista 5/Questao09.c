#include <stdio.h>
#define TAM 5
int main() {
    int vetor[TAM] = {5, 3, 4, 1, 2};
    int *ptr = vetor;
    for (int i = 0; i < TAM - 1; i++) {
        for (int j = 0; j < TAM - i - 1; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
    printf("Vetor ordenado: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    return 0;
}