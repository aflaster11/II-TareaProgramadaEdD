#include <iostream>
#include "DiccionarioLSE.h"
using namespace std;

int main(int argc, char const *argv[]) {
    DiccionarioLSE<char>* diccio = new DiccionarioLSE();
    diccio->agregar();
    return 0;
}
