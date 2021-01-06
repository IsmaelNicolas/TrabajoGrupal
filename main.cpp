#include <iostream>
#include "Libraries/Input.cpp"
#include "IngresoPersona.cpp"

using namespace std;

int option() {
    Menu _menu;
    char** _option = (char**)calloc(5, sizeof(char*));
    *(_option + 0) = "Ingresar por inicio";
    *(_option + 1) = "Ingresar por final";
    *(_option + 2) = "Ingresar por posicion";
    *(_option + 3) = "Mostrar";
    *(_option + 4) = "Salir";

    return _menu.options("Seleccione una opcion", _option , 5);
}



int main ()
{
Lista lista;
    IngresoPersona ingreso;
    Persona persona;
    Input input;
    char repuesta;
    int i,j;
    do {


    switch (option()){

        case 1:system("cls");
            do {
            ingreso.ingresoDatos();
            persona=ingreso.getPersona();
            persona.setCorreo(lista.rCorreoL(ingreso.getPersona()));
            lista.insertarInicio(persona);
            lista.imprimirLista();
            fflush(stdin);
            cout << "Quiere continuar? (S/N): ";
            scanf("%c", &repuesta);
            fflush(stdin);
        } while (repuesta != 'N' && repuesta != 'n');
        break;
        case 2:system("cls");
            do {
            ingreso.ingresoDatos();
            persona=ingreso.getPersona();
            persona.setCorreo(lista.rCorreoL(ingreso.getPersona()));
            lista.insertarFinal(persona);
            lista.imprimirLista();
            cout << "Quiere continuar? (S/N): ";
            scanf("%c", &repuesta);
            fflush(stdin);
        } while (repuesta != 'N' && repuesta != 'n');
        break;
        case 3:system("cls");
            do {
            //ingreso.ingresoDatos();
            ingreso.ingresoDatos();
            persona=ingreso.getPersona();
            persona.setCorreo(lista.rCorreoL(ingreso.getPersona()));
            i=to_int(input.input_int_number("\nIngrese la posicion"));
            lista.insertarEntre(persona,i);
            lista.imprimirLista();
            cout << "Quiere continuar? (S/N): ";
            scanf("%c", &repuesta);
            fflush(stdin);
        } while (repuesta != 'N' && repuesta != 'n');
        break;
        case 4:system("cls");
            lista.imprimirLista();
            system("pause");
        break;
        case 5:system("cls");
            cout<<"Gracias por usar nuestro programa"<<endl;
//            return 0;
        break;
    }
    }while(option()!=5);
    return 0;
}
