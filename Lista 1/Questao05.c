#include <stdio.h>
int main(){
    char x;
    printf("Digite o sexo (M para masculino ou F para feminino):\n");
    scanf(" %c", &x);
    float y=0;
    printf("Digite a altura em metros:\n");
    scanf("%f", &y);
    float z=0;
    if (x=='M'){
      z=72.7*y-58;
    }else if (x=='F'){
      z=62.1*y-44.7;
    }
    printf("Peso ideal: %.2f kg", z);
    return 0;
}
