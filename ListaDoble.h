/***********************************************************************
 * Module:  ListaDoble.h
 * Author:  ismae
 * Modified: martes, 5 de enero de 2021 17:02:55
 * Purpose: Declaration of the class ListaDoble
 ***********************************************************************/

#if !defined(__Class_Diagram_1_ListaDoble_h)
#define __Class_Diagram_1_ListaDoble_h

#include <Nodo.h>

class ListaDoble
{
public:
   ListaDoble();
   ~ListaDoble();
   std::string to_string(void);
   bool esVacia(void);
   void ingresarInicio(void);
   void ingresarFinal(void);
   void Anadir_en_medio(void);
   Nodo getNodoD(void);
   void setNodoD(Nodo newNodoD);

protected:
private:
   Nodo nodoD;


};

#endif