#include <stdio.h>
int main(){
    int x=0, n=0, y=0;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    y=x<<n;
    printf("Produto: %d\n", y);
    return 0;
}
