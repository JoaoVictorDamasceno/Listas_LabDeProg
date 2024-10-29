#include <stdio.h>
int main(){
    float x=0;
    printf("Digite o número:\n");
    scanf("%f", &x);
    printf("Valor com apenas uma casa decimal: %.1f", x);
    return 0;
}