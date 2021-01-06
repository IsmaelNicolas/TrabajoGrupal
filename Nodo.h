/***********************************************************************
 * Module:  Nodo.h
 * Author:  ismae
 * Modified: martes, 5 de enero de 2021 16:56:22
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Nodo_h)
#define __Class_Diagram_1_Nodo_h
#include <cstddef>

template<typename T>
class Nodo
{
public:
   Nodo();
   T getDato(void);
   void setDato(T dato);
   Nodo<T>* getSiguiente();
   void setSiguiente(Nodo<T>* siguiente);
   Nodo<T>* getAnterior();
   void setAnterior(Nodo<T>* anterior);

protected:
private:
   T dato;
   Nodo<T>* siguiente;
   Nodo<T>* anterior;
};

template<typename T>
Nodo<T>::Nodo() {
   siguiente = NULL;
   anterior = NULL;
}

template<typename T>
Nodo<T>* Nodo<T>::getSiguiente() {
   return siguiente;
}

template<typename T>
void Nodo<T>::setSiguiente(Nodo<T>* siguiente) {
   this->siguiente = siguiente;
}

template<typename T>
Nodo<T>* Nodo<T>::getAnterior() {
   return anterior;
}

template<typename T>
void Nodo<T>::setAnterior(Nodo<T>* anterior) {
   this->anterior = anterior;
}

template<typename T>
T Nodo<T>::getDato() {
   return dato;
}

template<typename T>
void Nodo<T>::setDato(T anterior) {
   this->dato = dato;
}

#endif
