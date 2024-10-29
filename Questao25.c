#include <stdio.h>
#include <math.h>
int main(){
    int x=0, x1=0, x2=0, y=0, y1=0, y2=0;
    double d=0;
    printf("Digite a coordenada x do primeiro ponto:\n");
    scanf("%d", &x1);
    printf("Digite a coordenada y do primeiro ponto:\n");
    scanf("%d", &y1);
    printf("Digite a coordenada x do segundo ponto:\n");
    scanf("%d", &x2);
    printf("Digite a coordenada y do segundo ponto:\n");
    scanf("%d", &y2);
    x=pow((x2-x1), 2);
    y=pow((y2-y1), 2);
    d=sqrt(x+y);
    printf("Distância entre os dois pontos no plano: %.2lf", d);
    return 0;
}