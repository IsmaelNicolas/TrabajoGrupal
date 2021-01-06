#include<string>
#include<iostream>

using namespace std;

#pragma once
class IngresoDatos
{
private:

	string text;

	int numero;

public:

	string IngresoTexto(string mensaje = "Ingrese texto:");
	int IngresoNumero(string mensaje = "Ingrese numeros:");
	

};

