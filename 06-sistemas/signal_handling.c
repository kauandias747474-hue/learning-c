#include <stdio.h>
#include <stdlib.h>
#include <signal.h> // Biblioteca para lidar com sinais do SO
#include <unistd.h> // Para a funcao sleep

// Funcao que sera chamada quando o sinal for detectado
void tratar_interrupcao(int sinal) {
    printf("\n\n[ALERTA] Sinal %d (SIGINT) recebido!\n", sinal);
    printf("Realizando limpeza de emergencia nos buffers...\n");
    printf("Fechando conexoes de seguranca...\n");
    printf("Programa encerrado corretamente.\n");
    exit(0); // Sai do programa de forma limpa
}

int main() {
    // Registra o tratador de sinal: Se receber SIGINT (Ctrl+C), chame minha funcao
    signal(SIGINT, tratar_interrupcao);

    printf("--- MONITOR DE SISTEMA RESILIENTE ---\n");
    printf("O programa esta rodando e monitorando o hardware...\n");
    printf("Pressione CTRL + C para testar a resiliencia do sinal.\n");

    while(1) {
        printf("Processando dados... (aguardando interrupcao)\n");
        sleep(2); // Espera 2 segundos
    }

    return 0;
}
