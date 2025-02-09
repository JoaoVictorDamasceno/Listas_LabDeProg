#include <stdio.h>
int main(){
    float x=0;
    printf("Digite o valor em real:\n");
    scanf("%f", &x);
    float y=0;
    printf("Digite a cotação atual do dólar:\n");
    scanf("%f", &y);
    float z=0;
    z= x*y;
    printf("Valor convertido em dólar: %.2f", z);
    return 0;
}
