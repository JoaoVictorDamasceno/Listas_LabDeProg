#include <stdio.h>
int main() {
    char str[100], ch;
    char *ptr = str;
    printf("Digite uma string: ");
    scanf("%s", ptr);
    printf("Digite um caractere: ");
    scanf(" %c", &ch);
    while (*ptr != '\0') {
        if (*ptr == ch) {
            printf("Caractere encontrado na posição: %p\n", (void*)ptr);
            return 0;
        }
        ptr++;
    }
    printf("Caractere não encontrado.\n");
    return 0;
}