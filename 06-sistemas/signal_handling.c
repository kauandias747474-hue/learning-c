#include <stdio.h>
#include <stdlib.h>
#include <signal.h> 
#include <unistd.h> 

void tratar_interrupcao(int sinal) {
    printf("\n\n[ALERTA] Sinal %d (SIGINT) recebido!\n", sinal);
    printf("Realizando limpeza de emergencia nos buffers...\n");
    printf("Fechando conexoes de seguranca...\n");
    printf("Programa encerrado corretamente.\n");
    exit(0); 
}

int main() {
    signal(SIGINT, tratar_interrupcao);

    printf("--- MONITOR DE SISTEMA RESILIENTE ---\n");
    printf("O programa esta rodando e monitorando o hardware...\n");
    printf("Pressione CTRL + C para testar a resiliencia do sinal.\n");

    while(1) {
        printf("Processando dados... (aguardando interrupcao)\n");
        sleep(2);
    }

    return 0;
}
