#include <stdio.h>
typedef struct{
    char nomePeca[50];
    int numeroPeca;
    float preco;
    int numeroPedido;
}Estoque;
int main(){
    Estoque item;
    printf("Digite o nome da peça: ");
    scanf(" %[^\n]", item.nomePeca);
    printf("Digite o número da peça: ");
    scanf("%d", &item.numeroPeca);
    printf("Digite o preço da peça: ");
    scanf("%f", &item.preco);
    printf("Digite o número do pedido: ");
    scanf("%d", &item.numeroPedido);
    printf("\nResumo do Pedido:\n");
    printf("Peça: %s\n", item.nomePeca);
    printf("Número da peça: %d\n", item.numeroPeca);
    printf("Preço: R$%.2f\n", item.preco);
    printf("Número do pedido: %d\n", item.numeroPedido);
    return 0;
}
