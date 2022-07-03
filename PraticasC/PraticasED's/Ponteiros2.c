#include <stdio.h>
// Ponteiro que aponta endereço físico da memória do computador. MEU DEUS!!!
int main (void){
	
	int x = 10;
	double y = 20.50;
	char z = 'a';
	
	int *pX = &x;
	double *pY = &y;
	char *pZ = &z;
	
	int *resultado;
	resultado = 6487548;
	
	printf("Valor de 'x': %i", *resultado);
	
/*	printf("Endereco x = %i - Valor x = %i\n", pX, *pX);
	printf("Endereco y = %i - Valor y = %.2f\n", pY, *pY);
	printf("Endereco z = %i - Valor z = %c\n", pZ, *pZ);
*/	
	getchar();
	return 0;
}
