#include <stdio.h>
#include <stdlib.h>


void processar_arquivo(const char *entrada, const char *saida, char chave) {
	FILE *f_in = fopen(entrada, "rb");
	FILE *f_out = fopen(saida, "wb");
	
	if(! f_in || !f_out) {
		perror("Erro ao abrir arquivos");
		
		
		if(f_in) fclose(f_in);
		if(f_out) fclose(f_out);
		return;
	}
   
   
       int byte;
       while ((byte = fgetc(f_in))  != EOF) {
       	    fputc(byte ^ chave, f_out);
       	}
       	    
       	    
       	    fclose(f_in);
       	    fclose(f_out);
   }
   
   
   int main(){
   	      char chave = 'K';
   	      processar_arquivo("teste.txt", "cifrado.bin",chave);
		  printf("Arquivo processado com sucesso!\n");
		  return 0;
  
  }
