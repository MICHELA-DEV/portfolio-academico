#include <stdio.h>

int main() {
    int n1, n2, n3, soma, sub, mult;
    double di;
    
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &n3);
    
    soma = n1 + n2 + n3;
    printf("O resultado da soma de %d + %d + %d = %d \n", n1, n2, n3, soma);
    
    sub = n1 - n2 - n3;
    printf("O resultado da subtracao de %d - %d - %d = %d \n", n1, n2, n3, sub);
    
    mult = n1 * n2 * n3;
    printf("O resultado da multiplicacao de %d * %d * %d = %d \n", n1, n2, n3, mult);
    
    di = (double)n1 / n2 / n3;
    printf("O resultado da divisao de %d / %d / %d = %f\n", n1, n2, n3, di);
    
    if (n1 > n2) {
        printf("O primeiro numero e maior que o segundo numero!\n");
    } else {
        printf("O primeiro numero nao e maior que o segundo numero!\n");
    }
    
    if (n2 < n3) {
        printf("O segundo numero e menor que o terceiro numero!\n");
    } else {
        printf("O segundo numero nao e menor que o terceiro numero!\n");
    }
    
    if ((n1 > 0) && ((n2 % 2) == 0)) {
        printf("O primeiro numero e POSITIVO e o segundo numero e PAR!\n");
    } else {
        printf("O primeiro numero nao e POSITIVO ou o segundo numero nao e PAR!\n");
    }
    
    return 0;
}