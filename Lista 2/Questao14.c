#include <stdio.h>
int main() {
    int A, B, count = 0;
    printf("Digite dois números: ");
    scanf("%d %d", &A, &B);
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }
    for (int i = A; i <= B; i++) {
        if (i % 3 == 0) {
            count++;
        }
    }
    printf("Quantidade de divisíveis por 3: %d\n", count);
    return 0;
}