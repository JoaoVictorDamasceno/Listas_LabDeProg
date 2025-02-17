#include <stdio.h>
int main() {
    unsigned char X, Y;
    printf("Digite dois valores (X e Y): ");
    scanf("%hhu %hhu", &X, &Y);
    if (Y < 5) {
        printf("Y deve ser maior ou igual a 5.\n");
        return 1;
    }
    for (int i = Y - 4; i <= Y + 4; i++) {
        if (i != Y) {
            printf("%hhu ", (i & 0xFE) | (X & 0x01));
            X >>= 1;
        }
    }
    printf("\n");
    return 0;
}