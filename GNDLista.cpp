#include "GNDLista.h"
#include <iostream>
using namespace std;

    Vertice(char){

    }
    ~Vertice(){

    }

    Arista(Vertice*, Vertice*, int){

    }
    ~Arista(){

    }

    public:
        Grafo(){

        }
        ~Grafo(){

        }
        void vaciar(){

        }
        int vacia(){

        }
        Vertice agrVertice (char) // Cambiar el return a vértice
        int peso(Vertice,Vertice);
        void agrArista(Vertice,Vertice,int);
        void modificarPeso(Vertice,Vertice, int);
        void elimVertice(Vertice);
        void elimArista(Vertice, Vertice);
        void modificarEtiqueta(Vertice, char);
        char etiqueta(Vertice);
        int numVertices();
        int numVerticesAdy();
        int adyacentes(Vertice, Vertice)
