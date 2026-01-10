#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>


 void limpeza_final(int sinal) {
 	printf("\n[SINAL %d RECEBIDO] Iniciando limpeza de emergencia...\n", sinal);
 	printf("Limpando buffers de memoria e fechando arquivos...\n");
 	printf("Sistema encerrado com segurança.\n");
 	exit(0);
 	
 }
 
 int main() {
 	
 	signal(SIGINT, limpeza_final);
 	
 	printf("Programa rodando. Aperte Ctrl+C para testar a resiliencia...\n");
 	
 	while(1) {
 		sleep(1);
	 }
	 
	 
	 return 0;
	 
 }
