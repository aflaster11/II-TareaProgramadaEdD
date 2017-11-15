#ifndef grafonodirigidoMatriz_2017
#define grafonodirigidoMatriz_2017

class Grafo {
    class Vertice;
    class Arista;
    private:
        class Vertice{
            public:
                char* etiq;
                Vertice(char*);
                ~Vertice();
        }
        class Arista{
            public:
                int peso;
                Vertice* VerticeA;
                Vertice* VerticeB;
                Arista(Vertice*, Vertice*, int);
                ~Arista();
        }
    public:
        Grafo();
        ~Grafo();
        void vaciar();
        int vacia();
        Vertice* agrVertice (char); // Cambiar el return a vértice
        int peso(Vertice*,Vertice*);
        void agrArista(Vertice*,Vertice*,int);
        void modificarPeso(Vertice*,Vertice*, int);
        void elimVertice(Vertice*);
        void elimArista(Vertice*, Vertice*);
        void modificarEtiqueta(Vertice*, char);
        char etiqueta(Vertice*);
        int numVertices();
        int numVerticesAdy();
        int adyacentes(Vertice*, Vertice*)
};

#endif
