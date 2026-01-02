#include <stdio.h>

int main() {
    int tipo;
    float horas, total;

    printf("--- SMARTPARK - SISTEMA DE TARIFACAO ---\n");
    printf("1 - Moto   | 2 - Carro   | 3 - Caminhao\n");
    printf("Escolha o tipo de veiculo: ");
    scanf("%d", &tipo);

    printf("Quantas horas de permanencia? ");
    scanf("%f", &horas);

    switch(tipo) {
        case 1: total = horas * 5.00; break;
        case 2: total = horas * 10.00; break;
        case 3: total = horas * 25.00; break;
        default:
            printf("Erro: Tipo de veiculo inexistente.\n");
            return 1; // Encerra o programa com erro
    }

    // Regra de Negocio: Se ficar mais de 8h, ganha 15% de desconto
    if (horas > 8) {
        total = total * 0.85; 
        printf("\n>>> Desconto de longa permanencia aplicado (15%%)!");
    }

    printf("\nValor total a pagar: R$ %.2f\n", total);
    return 0;
}
