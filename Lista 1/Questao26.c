#include <stdio.h>
#include <math.h>
int main(){
    float x=0, y=0, z=0, ma=0;
    double mg=0;
    printf("Digite o 1º número:\n");
    scanf("%f", &x);
    printf("Digite o 2º número:\n");
    scanf("%f", &y);
    printf("Digite o 3º número:\n");
    scanf("%f", &z);
    ma=(x+y+z)/3;
    mg=cbrt(x*y*z);
    printf("Média aritmética: %.2f\n", ma);
    printf("Média geométrica: %.2lf\n", mg);
    return 0;
}
