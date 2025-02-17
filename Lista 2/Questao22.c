#include <stdio.h>
int main() {
    int num, count = 0;
    printf("Digite um número: ");
    scanf("%d", &num);
    while (num != 0) {
        if (num % 10 == 7) count++;
        num /= 10;
    }
    printf("Quantidade de dígitos 7: %d\n", count);
    return 0;
}