#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct UF{
char codigo[3];
char descricao[50];
};
struct Cidade{
char codigo[3];
char descricao[50];
struct UF uf;
};
int main(){
struct Cidade *cidade = malloc(sizeof(struct Cidade));
struct UF *uf = malloc(sizeof(struct UF));
strcpy(uf->codigo,"PI");
strcpy(uf->descricao,"Piauí");
cidade->uf= *uf;
printf("Código: %s\n", cidade->uf.codigo);
}