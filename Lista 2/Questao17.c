#include <stdio.h>
int main() {
    for (int celsius = 10; celsius <= 100; celsius += 10) {
        float fahrenheit = (celsius * 9 / 5) + 32;
        printf("%d°C = %.2f°F\n", celsius, fahrenheit);
    }
    return 0;
}