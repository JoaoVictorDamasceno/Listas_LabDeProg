#include <stdio.h>
int main() {
    int a, b, soma;
    int *ptrA = &a, *ptrB = &b, *ptrSoma = &soma;
    printf("Digite dois números: ");
    scanf("%d %d", ptrA, ptrB);
    *ptrSoma = *ptrA + *ptrB;
    printf("Soma: %d\n", *ptrSoma);
    printf("Endereço da soma: %p\n", (void*)ptrSoma);
    return 0;
}