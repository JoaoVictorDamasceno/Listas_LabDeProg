#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int linhas = 5, colunas = 5;
    float M[linhas][colunas], S[linhas][colunas];
    float t = 0.5;
    srand(time(NULL));
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            M[i][j] = (float)rand() / RAND_MAX;
            S[i][j] = M[i][j] > t ? 1 : 0;
        }
    }
    printf("Matriz S:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", (int)S[i][j]);
        }
        printf("\n");
    }
    return 0;
}