#include <stdio.h>
int main(){
    float x=0;
    printf("Digite o comprimento:\n");
    scanf("%f", &x);
    float y=0;
    printf("Digite a largura:\n");
    scanf("%f", &y);
    float z=0;
    printf("Digite a altura:\n");
    scanf("%f", &z);
    float t=0;
    t= x*y*z;
    printf("Volume da caixa: %.2f", t);
    return 0;
}
