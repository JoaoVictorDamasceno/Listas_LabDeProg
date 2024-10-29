#include <stdio.h>
int main(){
    int x=0;
    printf("Digite o valor:\n");
    scanf("%d", &x);
    x=x*x;
    printf("Valor ao quadrado: %d", x);
    return 0;
}