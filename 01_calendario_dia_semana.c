#include <stdio.h>

int main() {
    int dia, mes, ano, diasdoano, dias31, anosbiss;
    long int anos, numdias;

    printf("Digite dia, mes e ano (Ex: 01 01 2024): \n");
    scanf("%d %d %d", &dia, &mes, &ano);

    anos = ano - 1600;

    // Lógica para meses com 31 dias
    if (mes > 8)
        dias31 = (mes / 2) + 1;
    else
        dias31 = (mes + 1) / 2;

    diasdoano = 30 * (mes - 1) + dia + dias31;

    // Ajuste para Fevereiro e Anos Bissextos no ano atual
    if (mes > 2) {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
            diasdoano -= 1; // Ano bissexto: Fevereiro tem 29
        else
            diasdoano -= 2; // Ano comum: Fevereiro tem 28
    }

    // Cálculo de anos bissextos acumulados desde 1600 até o ano anterior
    int ano_ant = ano - 1;
    anosbiss = (ano_ant / 4 - 1600 / 4) - (ano_ant / 100 - 1600 / 100) + (ano_ant / 400 - 1600 / 400);

    if (ano == 1600)
        numdias = diasdoano;
    else
        numdias = (anos * 365) + anosbiss + (long int)diasdoano;

    // Resultado baseado no resto da divisão por 7
    switch (numdias % 7) {
        case 1: printf("\n Sabado"); break;
        case 2: printf("\n Domingo"); break;
        case 3: printf("\n Segunda"); break;
        case 4: printf("\n Terca"); break;
        case 5: printf("\n Quarta"); break;
        case 6: printf("\n Quinta"); break;
        case 0: printf("\n Sexta"); break;
    }

    return 0;
}
