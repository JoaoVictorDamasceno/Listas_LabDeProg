#include <stdio.h>
int main(){
    float vh=0, ht=0, di=0, sb=0, sl=0;
    printf("Digite o valor da hora aula:\n");
    scanf("%f", &vh);
    printf("Digite a quantidade de horas trabalhadas no mês:\n");
    scanf("%f", &ht);
    printf("Digite o percentual de desconto do INSS:\n");
    scanf("%f", &di);
    sb=vh*ht;
    di=(sb*di)/100;
    sl=sb-di;
    printf("Salário bruto: %.2f\n", sb);
    printf("Salário líquido: %.2f\n", sl);
    return 0;
}
