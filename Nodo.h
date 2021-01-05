/***********************************************************************
 * Module:  Nodo.h
 * Author:  ismae
 * Modified: martes, 5 de enero de 2021 16:56:22
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Nodo_h)
#define __Class_Diagram_1_Nodo_h

#include <Persona.h>

class Nodo
{
public:
   Nodo getSig(void);
   void setSig(Nodo newSig);
   Persona getDato(void);
   void setDato(Persona newDato);
   Nodo();
   ~Nodo();
   Nodo getAtras(void);
   void setAtras(Nodo newAtras);

protected:
private:
   Persona dato;
   Nodo Sig;
   Nodo Atras;


};

#endif