#ifndef algoritmos_2017
#define algoritmos_2017

#include "DiccionarioLSE.h"
#include "CPArbol.h"

#include "GNDMatriz.h"
//#include "GNDLista.h"
class Algoritmos{
	private:
		Grafo* grafo1;
		Grafo* grafo2;

	public:
		Algoritmos();
		~Algoritmos();
		int iguales(Grafo*);
		Grafo*  copiar(Grafo*,Grafo*);
		void kruskal(Grafo*);
		void prim (Grafo*);
		void problemaDelVendedor(Grafo*);
};

#endif
