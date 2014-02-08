#include <stdio.h>

int main() {
	int iCount, i, iString;
	char string[100] = "Meu pai não deixou você comprar o petit gateau";
	iString = 0;
	
	printf("For em linha");
	for(iCount=1;iCount<=100;iCount=iCount+1) printf("%d \n", iCount); /* Comando For em Linha */
	
	/* Comando for em bloco */
	printf("For em bloco \n");
	for(iCount; iCount>=1; iCount=iCount-1){
		printf("%d \n",iCount);
	}
	
	printf("iCount = %d",iCount);
	
	/* for com string */
	for (i=0; string[i] != '\0'; i=i+1) {
		/* Verifica quantas letras a tem na string */
		if(string[i]=='a'){
			iString = iString + 1;
		}
	}
	
	printf("\n A frase escolhida foi:'%s' que contém: %d letras 'a'", string, iString);
}