#include <stdio.h>
int main(){
    int x=0;
    printf("Digite o primeiro número:\n");
    scanf("%d", &x);
    int y=0;
    printf("Digite o primeiro número:\n");
    scanf("%d", &y);
    (x%y==0)?printf("O primeiro é múltiplo do segundo"):printf("O primeiro não é múltiplo do segundo");
    return 0;
}
