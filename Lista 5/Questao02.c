#include <stdio.h>
int main() {
    int a, b, temp;
    int *ptrA = &a, *ptrB = &b;
    printf("Digite dois números: ");
    scanf("%d %d", ptrA, ptrB);
    temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
    printf("Valores trocados: %d, %d\n", *ptrA, *ptrB);
    return 0;
}