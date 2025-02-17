#include <stdio.h>
int main() {
    int voto, paulo = 0, renata = 0, branco = 0, nulo = 0;
    while (1) {
        printf("Digite o número do candidato (5-Paulo, 7-Renata, 0-Branco, negativo para sair): ");
        scanf("%d", &voto);
        if (voto < 0) break;
        switch (voto) {
            case 5: paulo++; break;
            case 7: renata++; break;
            case 0: branco++; break;
            default: nulo++; break;
        }
    }
    int total = paulo + renata + branco + nulo;
    printf("Paulo: %.2f%%, Renata: %.2f%%, Branco: %.2f%%, Nulo: %.2f%%\n",
           (float)paulo/total*100, (float)renata/total*100, (float)branco/total*100, (float)nulo/total*100);
    printf("Candidato eleito: %s\n", paulo > renata ? "Paulo" : "Renata");
    return 0;
}