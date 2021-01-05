/***********************************************************************
 * Module:  Persona.h
 * Author:  ismae
 * Modified: martes, 5 de enero de 2021 16:25:44
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Persona_h)
#define __Class_Diagram_1_Persona_h

class Persona
{
public:
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);
   std::string getCedula(void);
   void setCedula(std::string newCedula);
   std::string getCorreo(void);
   void setCorreo(std::string newCorreo);

protected:
private:
   std::string nombre;
   std::string apellido;
   std::string cedula;
   std::string correo;


};

#endif