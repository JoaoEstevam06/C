#include<stdio.h>
// REVIS�O FUN��ES E ESTRUTURAS COM VETORES

struct horario{
	int hora;
	int minuto;
	int segundo;
};

int main (void){
	
	void receberHorarios(struct horario lista[5]);
	void printHorarios(struct horario lista[5]);
	
	struct horario listaHorarios[5];
	receberHorarios(listaHorarios);
	printHorarios(listaHorarios);
	
	system("pause");
	return 0;
}

void receberHorarios(struct horario lista[5]){
	
	int i;
	for(i = 0; i < 5; i++){
		printf("Digite o %i horario (hh:mm:ss): \n", i + 1);
		scanf("%i: %i: %i\n",	&lista[i].hora,
								&lista[i].minuto,
								&lista[i].segundo);
	}
	
}

void printHorarios(struct horario lista[5]){
	
	int i;
	for(i = 0; i < 5; ++i){
		printf("O %i horario e' = %i: %i: %i\n",	i + 1,
													lista[i].hora,
													lista[i].minuto,
													lista[i].segundo);
	}
	
}
