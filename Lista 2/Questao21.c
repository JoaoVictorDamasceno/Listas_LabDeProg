#include <stdio.h>
int main() {
    int num, original, reverso = 0;
    printf("Digite um número de 5 dígitos: ");
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        reverso = reverso * 10 + num % 10;
        num /= 10;
    }
    if (original == reverso) {
        printf("É um palíndromo.\n");
    } else {
        printf("Não é um palíndromo.\n");
    }
    return 0;
}