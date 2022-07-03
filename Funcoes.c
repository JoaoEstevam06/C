#include <stdio.h>

int main(void){
	
	float somaDeDigitos(float num1, float num2);
	float a, b, soma;
	
	printf("Digite o primeiro numero: \n");
	scanf("%f", &a);
	printf("Digite o segundo numero: \n");
	scanf("%f", &b);
	
	soma = somaDeDigitos(a, b);
	printf("A soma e': %f\n", soma);
	
	
	system("pause");
	return 0;
}
float somaDeDigitos(float num1, float num2){
		
		float valorAbsoluto(float x);
		
		if(num1 < 0){
			num1 = valorAbsoluto(num1);
		}
		if(num2 < 0){
			num2 = valorAbsoluto(num2);
		}
		
		return num1 + num2;
}
float valorAbsoluto(float x){

	
	return x * -1;
}
	
