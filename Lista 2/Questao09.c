#include <stdio.h>
int main() {
    int a = 1, b = 1, c;
    printf("1, 1");
    for (int i = 3; i <= 20; i++) {
        c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}