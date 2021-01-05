/***********************************************************************
 * Module:  ListaDoble.h
 * Author:  ismae
 * Modified: martes, 5 de enero de 2021 16:51:21
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
   bool esVacia(void);
   void ingresarInicio(void);
   void ingresarFinal(void);
   void Anadir_en_medio(void);

protected:
private:
   int Dato;
   int Sig;


};

#endif