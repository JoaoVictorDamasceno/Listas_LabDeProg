#include <stdio.h>
int main() {
    float a, b;
    printf("Digite dois números: ");
    scanf("%f %f", &a, &b);
    while (b == 0) {
        printf("O segundo número não pode ser zero. Digite novamente: ");
        scanf("%f", &b);
    }
    printf("Resultado da divisão: %.2f\n", a / b);
    return 0;
}