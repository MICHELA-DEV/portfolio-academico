#include <stdio.h>

// Declaração (protótipos) das funções
float calcular_salario_bruto(float valor_hora, float horas_mes);
float calcular_desconto(float salario_bruto);
float calcular_salario_liquido(float salario_bruto, float desconto);

int main() {
    float valor_hora, horas_mes;
    float salario_bruto, desconto, salario_liquido;

    printf("--- Programa de Calculo Salarial Modular ---\n");
    printf("1. Digite o valor da sua hora de trabalho (R$): ");
    scanf("%f", &valor_hora);
    
    printf("2. Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%f", &horas_mes);

    // Chamada das funções
    salario_bruto = calcular_salario_bruto(valor_hora, horas_mes);
    desconto = calcular_desconto(salario_bruto);
    salario_liquido = calcular_salario_liquido(salario_bruto, desconto);

    // Exibição dos resultados
    printf("\n==================================\n");
    printf("     RESUMO DO PAGAMENTO MENSAL   \n");
    printf("==================================\n");
    printf("Salario Bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto (9%%): R$ %.2f\n", desconto);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);
    printf("==================================\n");

    return 0;
}

// Definição das funções
float calcular_salario_bruto(float valor_hora, float horas_mes) {
    return valor_hora * horas_mes;
}

float calcular_desconto(float salario_bruto) {
    const float TAXA_DESCONTO = 0.09;
    return salario_bruto * TAXA_DESCONTO;
}

float calcular_salario_liquido(float salario_bruto, float desconto) {
    return salario_bruto - desconto;
}