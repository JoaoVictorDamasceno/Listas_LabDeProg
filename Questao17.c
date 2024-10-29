#include <stdio.h>
int main(){
    float r=0;
    float pi=3.14159;
    printf("Digite o raio do círculo:\n");
    scanf("%f", &r);
    printf("Diâmetro do círculo: %f\n", r*2);
    printf("Circunferência do círculo: %f\n", 2*pi*r);
    printf("Área do círculo: %f\n", pi*r*r);
    return 0;
}