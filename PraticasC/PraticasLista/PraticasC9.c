#include <stdio.h>
// Vetores em estruturas
int main (void){
	
	struct horario{
		int hora;
		int minuto;
		int segundo;
	};
	
	struct horario teste[5] = {{10, 20, 30}, {20, 30, 40}, {30, 20, 50},
	{30, 20, 10}, {10, 10, 10}};
	//Assim também funciona {
	//teste[0].hora = 10;
	//teste[0].minuto = 20;
	//teste[0].segundo = 30; }
	int i;
	for(i = 0; i < 5; ++i){
		printf("%i: %i: %i\n",	teste[i].hora,
								teste[i].minuto,
								teste[i].segundo);	
	}

	
	system("pause");
	return 0;
}
