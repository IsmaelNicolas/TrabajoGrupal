/***********************************************************************
 * Module:  Menu.h
 * Author:  ismae
 * Modified: martes, 5 de enero de 2021 15:56:38
 * Purpose: Declaration of the class Menu
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Menu_h)
#define __Class_Diagram_1_Menu_h
#include<string>
#include "ListaDoble.h"
#include "Persona.h"

class Menu
{
	public:
		void imprimir_op();
		void menu_guardar_per();

	private:
		ListaDoble<Persona> lista;
};

#endif
