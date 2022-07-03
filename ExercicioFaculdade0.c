#include <stdio.h>

int main (){
	
	int linha, coluna;
	int matriz [3] [3];
	int eh_diagonal = 1;
	
	for(linha = 0; linha < 3; linha++){
		for(coluna = 0; coluna < 3; coluna++){
			printf("\nDigite os valores da matriz para [linha %d, coluna %d]: ", linha + 1, coluna + 1);
			scanf("%d", &matriz[linha] [coluna]);
		}
	}
	for(linha = 0; linha <3; linha++){
		for(coluna = 0; coluna < 3; coluna++){
			if(coluna != linha && matriz[linha][coluna] != 0){
				eh_diagonal = 0;
			}
		}
	}
	
	if(eh_diagonal == 1){
		printf("\n\nSua matriz E diagonal!");
	} else{
		printf("\n\nSua matriz NAO e diagonal!");
	}
	return 0;
}  	
