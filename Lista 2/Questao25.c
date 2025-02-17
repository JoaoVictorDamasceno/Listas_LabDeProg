#include <stdio.h>
int main() {
    double pi = 0;
    int termos;
    printf("Digite o número de termos: ");
    scanf("%d", &termos);
    for (int i = 0; i < termos; i++) {
        if (i % 2 == 0) {
            pi += 4.0 / (2 * i + 1);
        } else {
            pi -= 4.0 / (2 * i + 1);
        }
        printf("Termo %d: %.10f\n", i + 1, pi);
    }
    return 0;
}