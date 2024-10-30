#include <stdio.h>
int main(){
    int x=0;
    printf("Digite o número:\n");
    scanf("%d", &x);
    printf("Triplo de X: %d\n", x*3);
    printf("Quadrado de X: %d\n", x*x);
    double z=0;
    printf("Meio de X: %.2f\n", z=(float)x/2);
    return 0;
}
