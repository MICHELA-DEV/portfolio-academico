#include <stdio.h>

int main() {
    // Declaração do vetor para 5 dias de vendas e da variável acumuladora soma
    int vendas[5];
    int soma = 0;
    int i;

    printf("VENDAS DE SEGUNDA A SEXTA FEIRA\n\n");

    // 1. Laço para leitura dos valores de vendas
    for (i = 0; i < 5; i++) {
        printf("Insira o valor total das vendas do dia %d: R$ ", i + 1);
        scanf("%d", &vendas[i]);
    }

    // 2. Laço para cálculo da soma total acumulada
    for (i = 0; i < 5; i++) {
        soma = soma + vendas[i];
    }

    // 3. Exibição do relatório final de vendas
    printf("\nRelatorio de vendas em R$\n");
    for (i = 0; i < 5; i++) {
        printf("Total de vendas do dia %d : R$ %d\n", i + 1, vendas[i]);
    }

    printf("\nTotal de vendas dos 5 dias: R$ %d\n", soma);

    return 0;
}