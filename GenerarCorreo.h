#include"ListaEnlazada.h"


#pragma once
class GenerarCorreo
{
public:

	GenerarCorreo();
	void correoRepetido(ListaEnlazada* people, string correo);
	string crearCorreo(string apellido, string nombre, ListaEnlazada* people);
	bool existeCorreo(string correo, ListaEnlazada* people);

};

