#ifndef diccionario_2017
#define diccionario_2017

template <class T>
class DiccionarioLSE  {
    private:
        int numeroElementos;


    public:
        DiccionarioLSE();
        ~DiccionarioLSE();
        void vaciar();
        int vacio();
        int agregar();
        void borrar();
        int pertenece();
        int numElem();
};


#endif
