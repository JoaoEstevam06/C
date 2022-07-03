#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int dia, mes, ano;
}DataNas;

typedef struct{
	DataNas dataNas;
	int idade;
	char sexo;
	char nome[100];
} Pessoa;

int main(){
	Pessoa pessoa;
	
	printf("Digite seu nome: ");
	fgets(pessoa.nome, 100, stdin);
	printf("Digite sua idade: ");
	scanf("%d", &pessoa.idade);
	scanf("%c");
	printf("Digite 'f ou 'm' para o sexo: ");
	scanf("%c", &pessoa.sexo);
	printf("Digite sua data de nascimaneto no formato dd mm aaaa: ");
	scanf("%d%d%d", &pessoa.dataNas.dia, &pessoa.dataNas.mes, &pessoa.dataNas.ano);
	
	printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa.nome, pessoa.idade, pessoa.sexo);
	printf("Data de Nas.: %2d/%d/%4d\n", pessoa.dataNas.dia, pessoa.dataNas.mes, pessoa.dataNas.ano);
	
	return 0;
}
