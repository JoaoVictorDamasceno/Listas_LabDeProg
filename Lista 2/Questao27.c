#include <stdio.h>
int main() {
    int num, maior = -1, menor = -1;
    while (1) {
        printf("Digite um número (negativo e par para sair): ");
        scanf("%d", &num);
        if (num < 0 && num % 2 == 0) break;
        if (maior == -1 || num > maior) maior = num;
        if (menor == -1 || num < menor) menor = num;
    }
    printf("Produto do maior pelo menor: %d\n", maior * menor);
    return 0;
}