#include <stdio.h>
// ponteiros e vetores apontando para posi��es

int main (void){
	
	int vetor[3] = {1, 2, 3};
	int *ponteiro = &vetor[2];
	
	printf("%i", *ponteiro);
	
	
	getchar();
	return 0;
}
