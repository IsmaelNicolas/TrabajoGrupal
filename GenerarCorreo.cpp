#include "GenerarCorreo.h"
#include <sstream>

using namespace std;

GenerarCorreo::GenerarCorreo() {

}

string GenerarCorreo::crearCorreo(string apellido, string nombre, ListaEnlazada* people) {

	string dominio = "@espe.edu.ec";
	//string apellido = per->getApellido();
	string correo = apellido[0] + nombre + dominio;
	nodo* p = people->getNodo();
	int cont = 1;
	cout << p << endl;
	while (p != NULL) {
	
		if (correo == p->getDatoNodo()->getCorreo()) {
			
			correo = apellido[0] + nombre + to_string(cont) + dominio;
			cont += 1;
		}
		p = p->getEnlaceNodo();
	}

	return correo;

}
/*
bool GenerarCorreo::existeCorreo(string correo, ListaSimple* people) {

	nodo* p = people->getNodo();
	while (p != NULL)
	{
		if (correo == p->getDatoNodo()->getCorreo()) {
			return true;
		}
	}

	return false;
}

void GenerarCorreo::correoRepetido(ListaSimple* people, string correo) {

	string dominio = "@espe.edu.ec";
	string ape;
	string nickname;// = apellido[0] + nombre;
	string newCorreo;// = nickname + dominio;
	int cont = 0;
	nodo* p = people->getNodo();

	//crearCorreo(people);

	while (p != NULL)
	{

		if (correo == p->getDatoNodo()->getCorreo()) {

			ape = p->getDatoNodo()->getApellido();
			cout << "ok " << ape << endl;
			nickname = ape[0] + p->getDatoNodo()->getNombre();
			cont += 1;
			newCorreo = nickname + std::to_string(cont) + dominio;
			//cout << std::to_string(cont)<<endl;
			p->getDatoNodo()->setCorreo(newCorreo);
			//cout << p->getDatoNodo()->getCorreo() << endl;

		}

		p = p->getEnlaceNodo();
	}


}
*/