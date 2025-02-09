#include <stdio.h>
#define QTD_ALUNOS 3
typedef struct{
    float nota1;
    float nota2;
    float media;
}Aluno;
void calcularMedia(Aluno *a) {
    a->media = (a->nota1 + a->nota2) / 2;
}
int main(){
    Aluno alunos[QTD_ALUNOS];
    for (int i= 0; i<QTD_ALUNOS; i++){
        printf("Digite a primeira nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);
        
        printf("Digite a segunda nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);

        calcularMedia(&alunos[i]);
    }
    printf("\nMédias dos alunos:\n");
    for (int i = 0; i < QTD_ALUNOS; i++){
        printf("Aluno %d: Média = %.2f\n", i + 1, alunos[i].media);
    }
    return 0;
}
