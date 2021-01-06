<<<<<<< HEAD
=======
/***********************************************************************
 * Module:  ListaDoble.cpp
 * Author:  ismae
 * Modified: martes, 5 de enero de 2021 17:02:55
 * Purpose: Implementation of the class ListaDoble
 ***********************************************************************/

#include "ListaDoble.h"

////////////////////////////////////////////////////////////////////////
// Name:       ListaDoble::ListaDoble()
// Purpose:    Implementation of ListaDoble::ListaDoble()
// Return:     
////////////////////////////////////////////////////////////////////////

ListaDoble::ListaDoble()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaDoble::~ListaDoble()
// Purpose:    Implementation of ListaDoble::~ListaDoble()
// Return:     
////////////////////////////////////////////////////////////////////////

ListaDoble::~ListaDoble()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaDoble::to_string()
// Purpose:    Implementation of ListaDoble::to_string()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string ListaDoble::to_string(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaDoble::esVacia()
// Purpose:    Implementation of ListaDoble::esVacia()
// Return:     bool
////////////////////////////////////////////////////////////////////////

bool ListaDoble::esVacia(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaDoble::ingresarInicio()
// Purpose:    Implementation of ListaDoble::ingresarInicio()
// Return:     void
////////////////////////////////////////////////////////////////////////

void ListaDoble::ingresarInicio(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaDoble::ingresarFinal()
// Purpose:    Implementation of ListaDoble::ingresarFinal()
// Return:     void
////////////////////////////////////////////////////////////////////////


void Lista::ingresarFinal(Persona dato)
{

    if (this->esVacia())
    {
        this->nodoD = new Nodo(dato, this->listaFinal, this->listaFinal);
        this->listaFinal = this->nodoD;
    }
    else
    {
        Nodo* aux = new Nodo(dato, this->nodoD, this->listaFinal);
        this->nodoD->setAnterior(aux);
        this->listaFinal->setSiguiente(aux);
        this->listaFinal = aux;
    }
    cout <<"EXITO";
}

void ListaDoble::Anadir_en_medio(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaDoble::getNodoD()
// Purpose:    Implementation of ListaDoble::getNodoD()
// Return:     Nodo
////////////////////////////////////////////////////////////////////////

Nodo ListaDoble::getNodoD(void)
{
   return nodoD;
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaDoble::setNodoD(Nodo newNodoD)
// Purpose:    Implementation of ListaDoble::setNodoD()
// Parameters:
// - newNodoD
// Return:     void
////////////////////////////////////////////////////////////////////////

void ListaDoble::setNodoD(Nodo newNodoD)
{
   nodoD = newNodoD;
}
>>>>>>> 81c0f5a02b20f1cd71cb7cb107d143c637e5462b
