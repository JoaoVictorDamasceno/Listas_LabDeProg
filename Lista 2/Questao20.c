#include <stdio.h>
int main() {
    for (int i = 1; i <= 10; i += 2) {
        int fatorial = 1;
        for (int j = 1; j <= i; j++) {
            fatorial *= j;
        }
        printf("Fatorial de %d: %d\n", i, fatorial);
    }
    return 0;
}