#include <stdio.h>

int main() {
    int n1, soma = 0;
    
    printf("Insira um numero inteiro (digite 0 para terminar): ");
    scanf("%d", &n1);
    
    while (n1 != 0) {
        soma = soma + n1;
        printf("Insira um numero inteiro (digite 0 para terminar): ");
        scanf("%d", &n1);
    }
    
    printf("A soma dos numeros inteiros que foram inseridos e: %d \n", soma);
    
    return 0;
}