#include <stdio.h>
int main() {
    int anos = 0;
    int jose = 150, pedro = 110;
    while (pedro <= jose) {
        jose += 2;
        pedro += 3;
        anos++;
    }
    printf("Pedro será maior que José em %d anos.\n", anos);
    return 0;
}