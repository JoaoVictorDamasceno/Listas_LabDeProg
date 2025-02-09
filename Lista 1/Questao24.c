#include <stdio.h>
int main(){
    int s=0, h=0, m=0;
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &s);
    h=s/3600;
    m=s/60;
    printf("Horas: %d, minutos: %d, segundos: %d\n", h, m, s);
    return 0;
}
