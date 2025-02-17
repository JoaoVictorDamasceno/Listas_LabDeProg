#include <stdio.h>
int main(){
    float x=0;
    printf("Digite a quantidade de dias trabalhados:\n");
    scanf("%f", &x);
    float y=0;
    y=x*50.25;
    float z=0;
    if (x>10 && x<=20){
        y=y+(y*0.20);
    }else if (x>20){
        y=y+(y*0.30);
    }
    z=y-(y*0.10);
    printf("Valor líquido a ser pago: %.2f", z);
    return 0;
}