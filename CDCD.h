#ifndef ConjuntoDeConjuntos_2017
#define ConjuntoDeConjuntos_2017

template <class T>
class CDCD{

  class Conjunto;

  private:
    Conjunto* primerConjunto;
    Conjunto* buscarConjunto(int conjId){
      Conjunto* buscado = 0;
      Conjunto* actual = this->primerConjunto;
      bool encontro = false;
      while(actual){
        if(actual->identificador == conjId){
          encontro = true;
          buscado = actual;
        }
        actual = actual->siguiente;
      }
      return buscado;
    }
    Conjunto* buscarAnterior(Conjunto* conj1){
      Conjunto* anterior = 0;
      Conjunto* actual = this->primerConjunto;
      bool encontro = false;
      while(actual){
        if(actual->siguiente == conj1){
          encontro = true;
          anterior = actual;
        }
        actual = actual->siguiente;
      }
      return anterior;
    }

    class CajitaElem {
     public:
      T elemento;
      CajitaElem * siguienteElemento;
      CajitaElem(T elemento){
        this->elemento = elemento;
        siguienteElemento = 0;
      }
      ~CajitaElem(){
        if(siguienteElemento){
          delete siguienteElemento;
        }
      }
      ostream& imprimir(ostream& salida){
        this->elemento->imprimir(salida);
        salida<< ", ";
        if(siguienteElemento){
          this->siguienteElemento->imprimir(salida);
        }
        return salida;
      }
    };

    class Conjunto {
     public:
      int identificador;
      CajitaElem * primerElemento;
      Conjunto* siguiente;
      Conjunto(int id){
        this->identificador = id;
        this->siguiente = 0;
        this->primerElemento = 0;
      }
      ~Conjunto(){
        delete primerElemento;
        if(this->siguiente){
          delete siguiente;
        }
      }
      void agregarElemento(T elem){
        CajitaElem* nuevoElemento = new CajitaElem(elem);
        nuevoElemento->siguienteElemento = conj1->primerElemento;
        conj1->primerElemento = nuevoElemento;
      }
      ostream& imprimir(ostream& salida){
        salida << this->identificador;
        if(primerElemento){
          salida<<" {";
          primerElemento->imprimir(salida);
          salida<<"}, ";
        }
        return salida;
      }
    };

  public:
    CDCD(){
      this->primerConjunto = 0;
    }
    ~CDCD(){
      if(this->primerConjunto){
        delete primerConjunto;
      }
    }
    void vaciar(){
      delete CDCD;
      this->primerConjunto = 0;
    }
    bool vacio(){
      return !primerConjunto;
    }
    int conjuntoAlQuePertenece(T elem){
      Conjunto* conjAlQuePertenece = 0;
      bool encontro = false;
      Conjunto* conjActual = this->primerConjunto;
      CajitaElem* CajitaElemActual = conjActual->primerElemento;
      while (conjActual->siguiente != 0 && !encontro) {
        while (CajitaElemActual != 0 && !encontro){
          if(CajitaElemActual->elemento == elem){
            encontro = true;
            conjAlQuePertenece = conjActual;
          }
          CajitaElemActual = CajitaElemActual->siguienteElemento;
        }
        conjActual = conjActual->siguiente;
      }
      return conjAlQuePertenece;
    }
    void agregarConjunto(int nuevoId,T elem){
      Conjunto* nuevoConj = new Conjunto(nuevoId);
      nuevoConj->siguiente = this->primerConjunto;
      this->primerConjunto = nuevoConj;
      nuevoConj->agregarElemento(elem);
    }
    void unirConjuntos(int conj1,int conj2){
      Conjunto* conjA = buscarConjunto(conj1);
      Conjunto* conjB = buscarConjunto(conj2);
      CajitaElem* actual = conjB->primerElemento;
      while(actual){
        conjA->agregarElemento(actual->elemento);
        actual = actual->siguienteElemento;
      }
      Conjunto* anterior = buscarAnterior(conjB);
      anterior->siguiente = conjB->siguiente;
      conjB->siguiente = 0;
      delete conjB;
    }
};

#endif
