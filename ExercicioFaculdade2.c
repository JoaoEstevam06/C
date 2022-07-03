#include <stdio.h>
#include <ctype.h>

#define NOME_TAM 30

int main(){
	char nome [NOME_TAM];
	int i;
	
	printf("\nDigite o nome do aluno (a): ");
	fgets(nome, NOME_TAM, stdin);
	printf("\nNome ANTES de mudar para maiúsculo: %s", nome);
	
	for(int i = 0; i < NOME_TAM; i++){
		nome[i] = toupper(nome[i]);
	}
	printf("\nNome DEPOIS de mudar para maiusculo: %s", nome);
		
	return 0;
}
