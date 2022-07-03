#include <stdio.h>
// comportamento de funções

int main(void){
	
	void funcaoPrint(int x, int vetor[]);
	int x = 10;
	int vetor[3] = {10};
	
	funcadoPrint(x, vetor);
	
	printf("Variavel int da funcao principal = %i \n", x);
	printf("Vetor na funcao principal = %i \n", vetor[1]);
	
	system("pause");
	return 0;
	
}

void funcaoPrint(int x, int vetor[]){
	
	x = x + 10;
	vetor[1] = 20;
	
	printf("Variavel int funcao print = %i \n", x);
	printf("Vetor na funcao print = %i \n", vetor[1]);
}






