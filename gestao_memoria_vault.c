#include <stdio.h>
#include <stdlib.h>

typedef struct Vault {
    int segredo;
} Vault;

Vault* criar_vault(int s) {
    Vault *v = malloc(sizeof(Vault));
    if (v != NULL) {
        v->segredo = s;
    }
    return v;
}

void mostrar_segredo(Vault *v) {
    if (v != NULL) {
        printf("O segredo dentro do vault é: %d\n", v->segredo);
    }
} 
int main() {
   
    Vault *meu_cofre = criar_vault(747);
    
    mostrar_segredo(meu_cofre);
    
   
    free(meu_cofre);
    
    return 0;
}
