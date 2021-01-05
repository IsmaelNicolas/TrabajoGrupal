/***********************************************************************
 * Module:  ListaDoble.h
 * Author:  ismae
 * Modified: martes, 5 de enero de 2021 15:59:45
 * Purpose: Declaration of the class ListaDoble
 ***********************************************************************/

#if !defined(__Class_Diagram_1_ListaDoble_h)
#define __Class_Diagram_1_ListaDoble_h

class ListaDoble
{
public:
   ListaDoble();
   ~ListaDoble();
   int getSig(void);
   void setSig(int newSig);
   std::string to_string(void);

protected:
private:
   int Dato;
   int Sig;


};

#endif