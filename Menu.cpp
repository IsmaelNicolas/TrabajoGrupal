/***********************************************************************
 * Module:  Menu.cpp
 * Author:  ismae
 * Modified: martes, 5 de enero de 2021 15:56:38
 * Purpose: Implementation of the class Menu
 ***********************************************************************/

#include <string>
#include <iostream>

#include "Menu.h"


void Menu::imprimir_op() {
    std::cout << "1: Insertar al Inicio" << std::endl;
    std::cout << "2: Insertar entre" << std::endl;
    std::cout << "3: Insertar al Final" << std::endl;
    std::cout << "4: Salir" << std::endl;
}

void Menu::menu_guardar_per() {
    int op = 0;
    do {
        imprimir_op();
        std::cin >> op;
        switch (op)
        {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:
            //salir
            break;
        default:
            std::cout << "opcion incorrecta\n";
            break;
        }
        system("pause");
        system("cls");
    } while (op != 4);
}
