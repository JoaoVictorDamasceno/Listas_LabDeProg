#include <stdio.h>
int main(){
    int x=0;
    printf("Digite o primeiro número:\n");
    scanf("%d", &x);
    int y=0;
    printf("Digite o segundo número:\n");
    scanf("%d", &y);
    printf("Soma dos números: %.d\n", (x+y));
    printf("Produto dos números: %d\n", (x*y));
    printf("Diferença dos números: %d\n", (x-y));
    printf("Quociente dos números: %d\n", (x/y));
    printf("Resto dos números: %d\n", (x%y));
    return 0;
}