#include <stdio.h>
int main(){
    char string[]="A BCabc 0 12 $ * + /";
    int i=0;
    while(string[i]!='\0'){ 
        printf("Caractere: %c, Valor inteiro: %d\n", string[i], string[i]);
        i++;
    }
    return 0;
}