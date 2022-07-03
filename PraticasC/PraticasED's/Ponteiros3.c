#include <stdio.h>
// ponteiro utilizando '->'

int main (void){
	
	struct horario{
		int hora;
		int minuto;
		int segundo;
	};
	
	struct horario agora, *depois;
	depois = &agora;
	
	depois->hora = 20;
	depois->minuto = 30;
	depois->segundo = 40;
	
	printf("%i: %i: %i\n", agora.hora, agora.minuto, agora.segundo);
	
	system("pause");
	return 0;
}
