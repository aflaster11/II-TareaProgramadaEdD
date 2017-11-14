#ifndef _coladeprioridadArbol_2017
#define _coladeprioridadArbol_2017

#include <iostream>
#define M 1000

class CPArbol{
	private:
		int numElem;
		char* arbol;

		class Elemento{
			public:
				char elemento;
				int prioridad;

				//Métodos
				Elemento(char,int);
				~Elemento();

				void setElemento(char);
				void setPrioridad(int);

				int getPrioridad();
				char getElemento();

				std::cout imprimir(std::cout);
		}

	public:
		CPArbol();
		~CPArbol();

		void vaciar();
		int vacia();

		void agregar(char,int);
		char sacar();
		int numElem();
};

#endif
