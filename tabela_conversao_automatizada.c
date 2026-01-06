#include <stdio.h>
#include <stdlib.h>

// Definição de constantes para evitar números mágicos
#define TEMP_INICIAL 20
#define TEMP_FINAL 80
#define FATOR_CONVERSAO 5.0/9.0
#define OFFSET_FAHRENHEIT 32

// Função com responsabilidade única: Limpar a tela conforme o SO
void limparConsole() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

// Função com responsabilidade única: Lógica matemática
float converterFahrenheitParaCelsius(int fahrenheit) {
    return (fahrenheit - OFFSET_FAHRENHEIT) * FATOR_CONVERSAO;
}

int main() {
    int fahrenheit;
    float celsius;

    limparConsole();

    printf("TABELA DE CONVERSAO\n");
    printf("-------------------\n");

    for (fahrenheit = TEMP_INICIAL; fahrenheit <= TEMP_FINAL; fahrenheit++) {
        celsius = converterFahrenheitParaCelsius(fahrenheit);
        printf("%d F\t| %.2f C\n", fahrenheit, celsius);
    }

    return 0;
}