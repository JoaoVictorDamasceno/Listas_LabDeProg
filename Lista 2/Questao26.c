#include <stdio.h>
int main() {
    for (int i = 1; i <= 256; i++) {
        printf("Decimal: %d, Binário: %o, Octal: %o, Hexadecimal: %x\n", i, i, i, i);
    }
    return 0;
}