#include <stdio.h>
int main() {
    char str1[100], str2[100];
    char *ptr1 = str1, *ptr2 = str2;
    printf("Digite a primeira string: ");
    scanf("%s", ptr1);
    printf("Digite a segunda string: ");
    scanf("%s", ptr2);
    while (*ptr1 != '\0') {
        ptr1++;
    }
    while (*ptr2 != '\0') {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }
    *ptr1 = '\0';
    printf("Strings concatenadas: %s\n", str1);
    return 0;
}