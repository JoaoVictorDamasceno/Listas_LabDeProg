#include <stdio.h>
int main() {
    char str1[100], str2[100];
    char *ptr1 = str1, *ptr2 = str2;
    printf("Digite uma string: ");
    scanf("%s", ptr1);
    while (*ptr1 != '\0') {
        *ptr2 = *ptr1;
        ptr1++;
        ptr2++;
    }
    *ptr2 = '\0';
    printf("String copiada: %s\n", str2);
    return 0;
}