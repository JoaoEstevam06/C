#include <stdio.h>
//outro modo de inicializar estruturas

int main (void){
	
	struct horario{
		int horas;
		int minutos;
		int segundos;
	}; //agora = {10, 20, 30} aqui também pode ser declarado o struct
	
	//struct horario agora = {10, 20, 30};
	struct horario agora = {.segundos = 10, .horas = 20, .minutos = 30}; //inverte a ordem dos valores
	
	printf("%i: %i: %i\n",	agora.horas,
							agora.minutos,
							agora.segundos);
							
	system("pause");
	return 0;
}
