#if !defined(__Class_Diagram_1_ListaDoble_h)
#define __Class_Diagram_1_ListaDoble_h

#include "Nodo.h"
#include <string>
#include<iostream>
template<typename T>
class ListaDoble
{
public:
    ListaDoble();
    ~ListaDoble();
    bool esVacia();
    void ingresarInicio(T elemento);
    void ingresarFinal(T elemento);
    void ingresarEnMedio(T elemento);
    void imprimirDesdeInicio();
    void imprimirDesdeFinal();

private:
    Nodo<T> *cabeza;
    Nodo<T> *cola;
    int size;
};

//ListaDoble<Persona>

///////////////////////////////////////////////////////////////////////////////

template <typename T>
ListaDoble<T>::ListaDoble() {
	size = 0;
}

template <typename T>
ListaDoble<T>::~ListaDoble() {

}


template <typename T>
bool ListaDoble<T>::esVacia() {
    return size == 0;
}

template <typename T>
void ListaDoble<T>::ingresarInicio(T elemento) {
    // ...
}

template <typename T>
void ListaDoble<T>::ingresarFinal(T elemento) {
    // ...
}

template <typename T>
void ListaDoble<T>::ingresarEnMedio(T elemento) {
	Nodo* tmp = new Nodo();
	tmp->;
	tmp->siguiente = NULL;
	tmp->anterior = NULL;
}

template <typename T>
void ListaDoble<T>::imprimirDesdeInicio() {
    Nodo<T> *actual = cabeza;

    while (actual != NULL) {
        std::cout << actual->getDato();
        actual = cabeza->getSiguiente();
    }
}

template <typename T>
void ListaDoble<T>::imprimirDesdeFinal() {
    // ...
}


#endif
