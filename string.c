#include <stdio.h>

int main() {
	char sT[100];
	printf("Digite seu nome: \n");
	gets(sT); /* Não é seguro usar o método gets() aviso compilador: warning: this program uses gets(), which is unsafe. */
	printf("\n\n Você se chama: %s",sT);
	return(0);
	
	
}