#include <stdio.h>
int main() {
    int n, maior, menor;
    printf("Digite um número (0 para sair): ");
    scanf("%d", &n);
    maior = menor = n;
    while (n != 0) {
        if (n > maior) maior = n;
        if (n < menor) menor = n;
        printf("Digite um número (0 para sair): ");
        scanf("%d", &n);
    }
    printf("Maior: %d, Menor: %d\n", maior, menor);
    return 0;
}