#include <stdio.h>
int main() {
    int A, B, soma = 0;
    printf("Digite dois números: ");
    scanf("%d %d", &A, &B);
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }
    for (int i = A; i <= B; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }
    printf("Soma dos pares: %d\n", soma);
    return 0;
}