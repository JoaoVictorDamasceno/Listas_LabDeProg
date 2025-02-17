#include <stdio.h>
int main(){
    float c=0;
    printf("Digite a temperatura em graus Celsius:\n");
    scanf("%f", &c);
    float f=0;
    f=(9*c+160)/5;
    printf("Temperatura em Fahrenheit: %.2f\n", f);
    return 0;
}