#include <stdio.h>
// ponteiros e vetores apontando para endereços de memoria e valores
int main(void){
	
	int vetor[3] = {1, 2, 3};
	
	
	int *ponteiro = vetor[0];
	printf("%p\n", ponteiro);
	
	ponteiro = &vetor[1];
	printf("%p\n", ponteiro);
	
	ponteiro = &vetor[2];
	printf("%p\n", ponteiro);
	
	getchar();
	return 0;
}
