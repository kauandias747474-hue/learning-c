 

#include <stdio.h>

int main() {
    int ano1, ano2;
    int bissextos1, bissextos2, resultado;

    printf("Digite o ano inicial e o ano final (Ex: 1900 2024): ");
    scanf("%d %d", &ano1, &ano2);

   .
    int ano_anterior = ano1 - 1;

  

   
    bissextos2 = (ano2 / 4) - (ano2 / 100) + (ano2 / 400);

    bissextos1 = (ano_anterior / 4) - (ano_anterior / 100) + (ano_anterior / 400);

    
    resultado = bissextos2 - bissextos1;

    printf("Existem %d anos bissextos entre %d e %d.\n", resultado, ano1, ano2);

    return 0;
}
