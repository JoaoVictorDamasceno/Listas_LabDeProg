#include <stdio.h>
int main() {
    char str[100];
    char *ptr = str;
    printf("Digite uma string: ");
    scanf("%s", ptr);
    int tamanho = 0;
    while (*ptr != '\0') {
        tamanho++;
        ptr++;
    }
    printf("Tamanho da string: %d\n", tamanho);
    return 0;
}