#include <stdio.h>
int main(){
    int x=0;
    printf("Digite a quantidade de horas:\n");
    scanf("%d", &x);
    int y=0;
    printf("Digite a quantidade de minutos:\n");
    scanf("%d", &y);
    int z=0;
    printf("Digite a quantidade de segundos:\n");
    scanf("%d", &z);
    int xs=0;
    xs=x*3600;
    int ys=0;
    ys=y*60;
    int t=0;
    t=xs+ys+z;
    printf("Total de segundos: %d", t);
    return 0;
}
