/***********************************************************************
 * Module:  Generador.h
 * Author:  ismae
 * Modified: martes, 5 de enero de 2021 15:53:01
 * Purpose: Declaration of the class Generador
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Generador_h)
#define __Class_Diagram_1_Generador_h

class Generador
{
public:
   std::string generarCorreo(void);
   Generador();
   ~Generador();

protected:
private:
   std::string dominio;


};

#endif