#include <stdio.h>
int main() {
    float valor, entrada, prestacao;
    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valor);
    prestacao = (int)(valor / 3);
    entrada = valor - 2 * prestacao;
    printf("Entrada: %.2f, Prestações: %.2f\n", entrada, prestacao);
    return 0;
}