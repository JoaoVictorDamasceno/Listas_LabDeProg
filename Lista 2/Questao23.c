#include <stdio.h>
int main() {
    int x = 5;
    printf("Pré-incremento: %d\n", ++x); // x = 6
    x = 5;
    printf("Pós-incremento: %d\n", x++); // x = 5 (depois x = 6)
    return 0;
}