#include <stdio.h>
int main(){
    int x=0;
    printf("Digite o número:\n");
    scanf("%d", &x);
    (x%2==0)?printf("O número é par"):printf("O número é ímpar");
    return 0;
}