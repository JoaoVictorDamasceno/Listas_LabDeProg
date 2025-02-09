#include <stdio.h>
int main(){
    int x=0;
    printf("Digite o valor:\n");
    scanf("%d", &x);
    int y=0;
    y= x-1;
    int z=0;
    z= x+1;
    printf("Antecessor de %d: %d\n", x, y);
    printf("Sucessor de %d: %d\n", x, z);
    return 0;
}