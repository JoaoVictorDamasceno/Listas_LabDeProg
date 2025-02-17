#include <stdio.h>
int main() {
    int num, menor;
    int *ptrNum = &num, *ptrMenor = &menor;
    printf("Digite um número (0 para sair): ");
    scanf("%d", ptrNum);
    *ptrMenor = *ptrNum;
    while (*ptrNum != 0) {
        if (*ptrNum < *ptrMenor) {
            *ptrMenor = *ptrNum;
        }
        printf("Menor valor: %d\n", *ptrMenor);
        printf("Digite um número (0 para sair): ");
        scanf("%d", ptrNum);
    }
    return 0;
}