#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct{
    int *valores;    
    int quantidade;  
    float media;    
}Vetor;
void gerarNumeros(Vetor *v, int qtd){
    v->quantidade = qtd;
    v->valores = (int *)malloc(qtd * sizeof(int));
    if (v->valores == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }
    int soma= 0;
    for (int i= 0; i<qtd; i++) {
        v->valores[i] = rand() % 100;
        soma += v->valores[i];
    }
    v->media= (float)soma / qtd;
}
void imprimirVetor(Vetor v){
    printf("Vetor: ");
    for (int i = 0; i < v.quantidade; i++) {
        printf("%d ", v.valores[i]);
    }
    printf("\nMédia: %.2f\n", v.media);
}
int main(){
    srand(time(NULL));
    Vetor v;
    int tamanho;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &tamanho);
    gerarNumeros(&v, tamanho);
    imprimirVetor(v);
    free(v.valores);
    return 0;
}
