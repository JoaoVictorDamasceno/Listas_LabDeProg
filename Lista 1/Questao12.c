#include <stdio.h>
int main(){
    int x=0;
    printf("Digite o primeiro número:\n");
    scanf("%d", &x);
    int y=0;
    printf("Digite o segundo número:\n");
    scanf("%d", &y);
    printf("%d, %d", x, y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d, %d", x, y);
    return 0;
}
