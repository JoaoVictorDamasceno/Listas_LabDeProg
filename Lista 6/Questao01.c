#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s <valor1> <valor2> <codigo_operacao>\n", argv[0]);
        return 1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int codigo = atoi(argv[3]);
    if (codigo == 1) {
        printf("Soma: %d\n", a + b);
    } else if (codigo == 2) {
        printf("Multiplicação: %d\n", a * b);
    } else {
        printf("Código de operação inválido.\n");
    }
    return 0;
}