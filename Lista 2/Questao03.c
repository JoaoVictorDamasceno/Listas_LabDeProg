#include <stdio.h>
int main() {
    int F, fatorial = 1;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &F);
    for (int i = 1; i <= F; i++) {
        fatorial *= i;
    }
    printf("Fatorial de %d é %d\n", F, fatorial);
    return 0;
}