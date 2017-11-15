#ifndef menu_2017
#define menu_2017
#include "DiccionarioLSE.h"
#include "GNDLista.h"
class Menu {
    private:
        Grafo* grafo1;
        Grafo* grafo2;

    public:
        Menu();
        ~Menu();
        void controlador();
        void obGrafos();
        void algoritmosGrafos();

};

#endif
