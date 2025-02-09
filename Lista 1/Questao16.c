#include <stdio.h>
#include <stdlib.h>
int main(){
    int x=0;
    printf("Digite o valor:\n");
    scanf("%d", &x);
    printf("Valor absoluto desse número: %d", abs(x));
    return 0;
}
