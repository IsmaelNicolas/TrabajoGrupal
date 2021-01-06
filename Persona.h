#if !defined(__Class_Diagram_1_Persona_h)
#define __Class_Diagram_1_Persona_h
#include <string>
#include <iostream>

class Persona
{
public:
   std::string getNombre();
   void setNombre(std::string nombre);
   std::string getApellido();
   void setApellido(std::string apellido);
   std::string getCedula();
   void setCedula(std::string cedula);
   std::string getCorreo();
   void setCorreo(std::string correo);

   friend std::ostream& operator<<(std::ostream& os, const Persona& persona) {
		std::string nombre, apellido, correo, cedula;

		nombre = (persona.nombre.empty() ? "[vacio]" : persona.nombre);
		apellido = (persona.apellido.empty() ? "[vacio]" : persona.apellido);
		cedula = (persona.cedula.empty() ? "[vacio]" : persona.cedula);
		correo = (persona.correo.empty() ? "[vacio]" : persona.correo);

		return os << "{" << std::endl
				  << "    nombre: " << nombre << "," << std::endl
				  << "    apellido: " << apellido << "," << std::endl
				  << "    email: " << correo << "," << std::endl
				  << "    cedula: " << cedula << "," << std::endl
				  << "}" << std::endl
				  << std::endl;
	}

private:
   std::string nombre;
   std::string apellido;
   std::string cedula;
   std::string correo;

};

#endif