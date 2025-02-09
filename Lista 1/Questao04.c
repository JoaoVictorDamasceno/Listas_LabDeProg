#include <stdio.h>
int main(){
    int x=0;
    printf("Digite o valor da conta:\n");
    scanf("%d", &x);
    float y=0;
    y= x/10;
    printf("Valor total a ser pago: %.2f\n", (float)x+y);
    return 0;
}
