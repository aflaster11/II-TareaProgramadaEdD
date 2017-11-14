#ifndef algoritmos_2017
#define algoritmos_2017

#include "GNDMatriz.h"

class Algoritmos{
	public:
		int iguales(Grafo*);
		Grafo*  copiar(Grafo*,Grafo*);
		void kruskal(Grafo*);
		void prim (Grafo*);
		void problemaDelVendedor(Grafo*);
};

#endif
