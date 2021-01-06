
#include "Lista.h"
#include <iostream>

using namespace std;
bool Lista::listaVacia()
{
    return lista==NULL;
}

Lista::Lista()
{
    this->lista = NULL;
    this->listaFinal = NULL;
}

int Lista::tamano()
{
    Nodo* aux = new Nodo();
    Nodo* aux1 = new Nodo();

    aux = this->lista;

    int posicion = 0;
    while (aux != this->listaFinal)
    {
        posicion++;
        aux1 = aux;
        aux = aux->getSiguiente();
    }

    return posicion + 1;
}

void Lista::insertarInicio(Persona dato)
{
    if (this->listaVacia())
    {
        this->lista = new Nodo(dato, this->listaFinal, this->listaFinal);
        this->listaFinal = this->lista;
        cout <<"EXITO";
    }
    else
    {
        Nodo* aux = new Nodo(dato, lista, this->listaFinal);
        this->lista->setAnterior(aux);
        this->listaFinal->setSiguiente(aux);
        this->lista = aux;
    }

}

void Lista::insertarFinal(Persona dato)
{

    if (this->listaVacia())
    {
        this->lista = new Nodo(dato, this->listaFinal, this->listaFinal);
        this->listaFinal = this->lista;
    }
    else
    {
        Nodo* aux = new Nodo(dato, this->lista, this->listaFinal);
        this->lista->setAnterior(aux);
        this->listaFinal->setSiguiente(aux);
        this->listaFinal = aux;
    }
    cout <<"EXITO";
}
