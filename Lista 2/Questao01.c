#include <stdio.h>
int main() {
    int dia;
    while (1) {
        printf("Digite um número de 1 a 7 (0 para sair): ");
        scanf("%d", &dia);
        if (dia == 0) break;
        switch (dia) {
            case 1: printf("Domingo\n"); break;
            case 2: printf("Segunda\n"); break;
            case 3: printf("Terça\n"); break;
            case 4: printf("Quarta\n"); break;
            case 5: printf("Quinta\n"); break;
            case 6: printf("Sexta\n"); break;
            case 7: printf("Sábado\n"); break;
            default: printf("Número de dia não válido\n");
        }
    }
    return 0;
}