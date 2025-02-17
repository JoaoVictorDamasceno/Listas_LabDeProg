#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
typedef float (*FuncaoErro)(float *, float *, int);
float mse(float *A, float *B, int N) {
    float erro = 0;
    for (int i = 0; i < N; i++) {
        erro += pow(A[i] - B[i], 2);
    }
    return erro / N;
}
float mae(float *A, float *B, int N) {
    float erro = 0;
    for (int i = 0; i < N; i++) {
        erro += fabs(A[i] - B[i]);
    }
    return erro / N;
}
float calcularErro(float *A, float *B, int N, FuncaoErro funcao) {
    return funcao(A, B, N);
}
int main() {
    int N = 10;
    float A[N], B[N];
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        A[i] = (float)rand() / RAND_MAX;
        B[i] = (float)rand() / RAND_MAX;
    }
    printf("MSE: %.2f\n", calcularErro(A, B, N, mse));
    printf("MAE: %.2f\n", calcularErro(A, B, N, mae));
    return 0;
}