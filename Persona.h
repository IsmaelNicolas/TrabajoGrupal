#include <iostream>
#include <sstream>
#include <string.h>
#include "Fecha.cpp"

using namespace std;
class Persona{

public:
    Persona();
    Persona(int,string,string,string,string);
    void setEdad(int);
    void setCedula(string);
    void setNombre(string);
    void setApellido(string);
    void setCorreo(string);
    void setFecha(Fecha);
    int getEdad();
    string rCorreo(int);
    string rCorreo();
    string getCedula();
    string getNombre();
    string getApellido();
    string getCorreo();
    Fecha getFecha();
    void toString();
    /*virtual ~Persona();*/
private:
    int edad;
    string cedula;
    string nombre ;
    string apellido;
    string correo;
    Fecha fecha;
};
