#ifndef menu_2017
#define menu_2017
#include "DiccionarioLSE.h"
#include "Algoritmos.h"
#include "GNDLista.h"
class Menu {
    private:
        Grafo* grafo1;
        Grafo* grafo2;
        Algoritmos* algoritmo;
    public:
        Menu();
        ~Menu();
        void controlador();
        void obGrafos();
        void algoritmosGrafos();
        void InstruccionesAlgoritmos();
        void InstruccionesOB();
        void algoritmosGrafos();
        void algoritmosGrafos();
        //Operadores Básicos
        void Salir();
        void iniciar();
        void destruir();
        void vaciar();
        void vacia();
        void agrVertice (); // Cambiar el return a vértice
        void peso();
        void agrArista();
        void modificarPeso();
        void elimVertice();
        void elimArista();
        void modificarEtiqueta();
        void etiqueta();
        void numVertices();
        void numVerticesAdy();
        void adyacentes();
        void primerVertice();
        void siguienteVertice();
        void primerVerticeAdy();
        void siguienteVerticeAdy();

        // Algoritmos

        void dijkstra ();
        void floyd ();
        void prim ();
        void kruskal ();
        void copiar ();
        void iguales ();
        void problemaDelVendedor ();


};

#endif
