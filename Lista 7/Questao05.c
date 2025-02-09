#include <stdio.h>
typedef struct {
    char nome[50];
    char titulacao[30]; 
} Professor;
typedef struct {
    char nome[50];
    int codigo;
    Professor professor; 
} Disciplina;
int main() {
    Disciplina disciplina;
    printf("Digite o nome da disciplina: ");
    scanf(" %[^\n]", disciplina.nome);
    printf("Digite o código da disciplina: ");
    scanf("%d", &disciplina.codigo);
    printf("Digite o nome do professor: ");
    scanf(" %[^\n]", disciplina.professor.nome);
    printf("Digite a titulação do professor: ");
    scanf(" %[^\n]", disciplina.professor.titulacao);
    printf("\nResumo da Disciplina:\n");
    printf("Nome: %s\n", disciplina.nome);
    printf("Código: %d\n", disciplina.codigo);
    printf("Professor: %s\n", disciplina.professor.nome);
    printf("Titulação: %s\n", disciplina.professor.titulacao);
    return 0;
}
