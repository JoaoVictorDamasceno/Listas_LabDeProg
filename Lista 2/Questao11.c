#include <stdio.h>
int main() {
    int A, B;
    printf("Digite dois números: ");
    scanf("%d %d", &A, &B);
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }
    for (int i = A; i <= B; i++) {
        if (i % 4 == 0) {
            printf("%d ", i * i);
        }
    }
    printf("\n");
    return 0;
}