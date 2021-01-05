/***********************************************************************
 * Module:  Menu.h
 * Author:  ismae
 * Modified: martes, 5 de enero de 2021 15:56:38
 * Purpose: Declaration of the class Menu
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Menu_h)
#define __Class_Diagram_1_Menu_h

class Menu
{
public:
   void crearMenu(void);
   Menu(std::string* opciones);
   ~Menu();

protected:
private:
   std::string Opciones;


};

#endif