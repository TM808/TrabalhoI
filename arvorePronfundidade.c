#include <stdio.h>
#include <stdlib.h>

typedef struct arv{
	char informacao;
	struct Arv *noEsquerdo, *noDireito;
}Arv;

Arv *criar(){
	return NULL;
}

Arv *adicionar(char informacao, Arv *noE, Arv *noD){
	Arv *no = (Arv *)malloc(sizeof(Arv));
	no->informacao = informacao;
	no->noEsquerdo = noE;
	no->noDireito = noD;
}

void imprime(Arv *no){
	printf("Dados: %c\n", no->informacao);
}

void imprimeProfundidade(Arv *arvore){
	if(arvore != NULL){
		imprime(arvore);
		
	}
}

int main(){
	Arv *a6 = adicionar('g', criar(), criar());
	Arv *a5 = adicionar('f', criar(), criar());
	Arv *a4 = adicionar('e', criar(), criar());
	Arv *a3 = adicionar('d', criar(), criar());
	
	Arv *a2 = adicionar('c', a5, a6);
	Arv *a1 = adicionar('b', a3, a4);
	
	Arv *a = adicionar('a', a1, a2);
	
	imprimeProfundidade(a);
	return 0;
}