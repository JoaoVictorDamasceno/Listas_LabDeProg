#include <stdio.h>
int main() {
    for (int cateto1 = 1; cateto1 <= 500; cateto1++) {
        for (int cateto2 = cateto1; cateto2 <= 500; cateto2++) {
            for (int hipotenusa = cateto2; hipotenusa <= 500; hipotenusa++) {
                if (cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa) {
                    printf("%d, %d, %d\n", cateto1, cateto2, hipotenusa);
                }
            }
        }
    }
    return 0;
}