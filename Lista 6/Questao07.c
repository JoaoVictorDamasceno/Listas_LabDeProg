#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main() {
    int N = 10;
    float A[N], B[N];
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        A[i] = (float)rand() / RAND_MAX;
        B[i] = (float)rand() / RAND_MAX;
    }
    float mse = 0;
    for (int i = 0; i < N; i++) {
        mse += pow(A[i] - B[i], 2);
    }
    mse /= N;
    printf("Erro Médio Quadrático: %.2f\n", mse);
    return 0;
}