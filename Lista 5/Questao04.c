#include <stdio.h>
int main() {
    int vetor[5];
    int *ptr = vetor;
    printf("Digite 5 números: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }
    for (int i = 0; i < 5; i++) {
        printf("Valor: %d, Endereço: %p\n", *(ptr + i), (void*)(ptr + i));
    }
    return 0;
}
