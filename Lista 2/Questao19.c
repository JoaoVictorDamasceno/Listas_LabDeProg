#include <stdio.h>
int main() {
    int A, B, soma = 0, count = 0;
    printf("Digite dois números: ");
    scanf("%d %d", &A, &B);
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }
    for (int i = A; i <= B; i++) {
        soma += i;
        count++;
    }
    printf("Média: %.2f\n", (float)soma / count);
    return 0;
}