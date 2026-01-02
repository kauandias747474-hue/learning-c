/* ESTUDO DE FLUXO: COMPORTAMENTO CASCATA (FALL-THROUGH)
   Este código demonstra como o switch se comporta sem o comando 'break'.
   Se o usuário digitar 2, o programa executará o case 2, 3, 4 e o default.
*/

#include <stdio.h>

int main() {
    int x;
    
    printf("Digite um numero inteiro entre 1 e 5: \n");
    scanf("%d", &x); 
    
    switch(x) {
        case 1: printf("Valor de x: %d \n", x);
        case 2:printf("Valor do dobro de %d: %d \n", x,2*x);
        case 3:printf("Valor do triplo de %d: %d \n", x, 3*x);
        case 4:printf("Valor do quadruplo de %d: %d \n", x, 4*x);
        default: printf("Valor digitado: %d \n", x);
    }
}