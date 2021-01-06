#include "Persona.h"
Persona::Persona()
{

}
Persona::Persona(int edad,string cedula, string nombre, string apellido, string correo)
{

    setEdad(edad);
    setCedula(cedula);
    setNombre(nombre);
    setApellido(apellido);
    setCorreo(correo);
}
void Persona::setEdad(int edad)
{
    this->edad=edad;
}
void Persona::setCedula(string cedula)
{
    this->cedula=cedula;
}

void Persona::setNombre(string nombre)
{
    this->nombre=nombre;
}


void Persona::setApellido(string apellido)
{
    this->apellido=apellido;
}
void Persona::setCorreo(string correo)
{
    this->correo=correo;
}
void Persona::setFecha(Fecha fecha)
{
    this->fecha=fecha;
}
int Persona::getEdad()
{
    return this->edad;
}
string Persona::getNombre()
{
    return this->nombre;
}
string Persona::getCedula()
{
    return this->cedula;
}
string Persona::getApellido()
{
    return this->apellido;
}
string Persona::getCorreo()
{
    return this->correo;
}
Fecha Persona::getFecha()
{
    return this->fecha;
}

string Persona::rCorreo(){
    string correo,nombre,apellido,dir;
    nombre=this->getNombre();
    apellido=this->getApellido();
    dir="@espe.edu.ec";
    correo=nombre[0]+apellido+dir;
    return correo;
}
string Persona::rCorreo(int n){
    string correo,nombre,apellido,dir;
    nombre=this->getNombre();
    apellido=this->getApellido();
    dir="@espe.edu.ec";
    correo=nombre[0]+apellido+to_string(n)+dir;
    return correo;
}

/*void Persona::toString(){
    cout<<cedula<<endl;
    cout<<nombre<<endl;
    cout<<apellido<<endl;
    cout<<correo<<endl;
    cout<<edad<<endl;

}*/
