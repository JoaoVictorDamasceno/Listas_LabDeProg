#include <stdio.h>
int main(){
    int x=0;
    printf("Digite o número:\n");
    scanf("%d", &x);
    printf("Número em hexadecimal: %X\n", x);
    printf("Número em octal: %o\n", x);
    return 0;
}