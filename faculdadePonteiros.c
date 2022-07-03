#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>

int obter(struct Lista* li, int pos){
	assert(li != NULL);
	assert(pos >= 0 && pos < li->tamanho);
	struct No* aux = li->inicio;
	for(int i = 0; i < pos; i++){
		aux = aux->proximo;
	}
	return aux->info
}

int remover(struct Lista* li, int pos){
	assert(vazia(li) == false);
	assert(pos >= 0 && pos < li->tamanho);
	
	struct No* ant = NULL;
	struct No* aux = li->inicio;
	for(int i = 0; i < pos; i++){
		ant = aux;
		aux = aux->proximo;
	}
		if (ant == NULL){
			li->inicio = aux->proximo;
		} else{
			ant->proximo = aux->proximo;
		}
		
		int elemento = aux->info;
		li->tamanho--;
		free(aux);
		return elemento;	
}

void liberar(struct Lista* li){
	while(vazia(li) == false){
		remover(li, 0);
	}
	free(li);
}

struct Lista* criar() {
    struct Lista* nova_lista = (struct Lista*) malloc(sizeof(struct Lista));
    if (nova_lista != NULL) {
        nova_lista->inicio = NULL;
        nova_lista->tamanho = 0;
    }
    return nova_lista;
}

int main (){
	struct Lista* minha_lista = criar();
	inserir(minha_lista, 0, 5);
	inserir(minha_lista, 0, 3);
	printf("\n%d", tamanho(minha_lista));
	
	return 0;
}
