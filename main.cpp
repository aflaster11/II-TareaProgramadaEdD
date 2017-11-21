#include <iostream>
#include "DiccionarioLSE.h"
#include "CDCD.h"
using namespace std;

int main(int argc, char const *argv[]) {
    DiccionarioLSE<int> diccio;
    diccio.agregar(1);
    diccio.agregar(2);
    diccio.agregar(3);
    diccio.agregar(4);
    diccio.imprimir(cout);
    diccio.borrar(4);
    diccio.agregar(5);
    diccio.agregar(6);
    diccio.imprimir(cout);
    cout << endl;
    return 0;
}
