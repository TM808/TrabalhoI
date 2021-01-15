#include <stdlib.h>
#include <stdio.h>


int main(int argc, char** argv)
{
	
int BuscaEmLargura ( int Grafo *g, Fila *f, int raiz){
	int VerticesMarcadas[NumVertices];
	//vector de vertices marcados
	
	int tamVerticesMarcados=0;
	int vertice 1;
	nalista*p;
	
	verticesMarcados[0]=raiz; //marca raiz
	tamVerticesMarcados ++;
	paVerticesNaFila (F,raiz); //pae raiz na fila
	
	while (!Filavazia(F)){
		vertice 1=F->iri->vertice;
		p=G->Ladj [vertice 1-1] inicio;
		
		while (p!=NULL){
			if(!BuscaVertice (p->verice,VerticesMarcados)){
				
				verticesMarcado [tamVerticesMarcados ++]=p->vertices;
				parVerticeNaFila(F,p->vertice);}
				else if (WPertenceF(p->vertice,F)){}
					p=p->pox;
		}RetiraVerticeFila(F);
	}
//	return 0;
}

	return 0;
}

