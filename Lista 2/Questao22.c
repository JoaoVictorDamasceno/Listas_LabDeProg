#include <stdio.h>
int main(){
    int x=0, c=0, d=0, u=0;
    printf("Digite um número de 3 dígitos:\n");
    scanf("%d",&x);
    c=x/100;
    d=(x/10)%10;
    u=x%10;
    x=u*100+d*10+c;
    printf("Número invertido: %d", x);
    return 0;
}