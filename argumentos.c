#include <stdio.h>

int fQuadrado(int iX){
	printf("O Quadrado é %d",(iX*iX));
	return(0);
}

int main() {
	int iNum;
	printf("Entre com um número inteiro: ");
	scanf("%d",&iNum);
	printf("\n\n");
	fQuadrado(iNum);
	return(0);
}