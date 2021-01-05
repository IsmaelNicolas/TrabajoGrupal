/***********************************************************************
 * Module:  IngresarDatos.h
 * Author:  ismae
 * Modified: martes, 5 de enero de 2021 15:45:04
 * Purpose: Declaration of the class IngresarDatos
 ***********************************************************************/

#if !defined(__Class_Diagram_1_IngresarDatos_h)
#define __Class_Diagram_1_IngresarDatos_h

class IngresarDatos
{
public:
   std::string IngresoTexto(std::string mensaje);
   int IngresoEnteros(std::string mensaje);
   float IngresoDecimales(std::string mensaje);

protected:
private:

};

#endif