#include "IngresoDatos.h"
#include <conio.h>
#include <sstream> 

using namespace std;

string IngresoDatos::IngresoTexto(string mensaje) {

    string text = "";
    char letter;

    cout << "\n\t"<<mensaje<<"\n\t";
    letter = _getch();
    while (letter != 13) {

        if ((letter < 91 && letter > 64) || (letter < 123 && letter > 96) || letter == 48) {
            text.push_back(letter);
            cout << letter;
        }
        letter = _getch();
    }
    return text;
}

int IngresoDatos::IngresoNumero(string mensaje) {

    string num = "";
    char dig;
    int numero;

    cout << "\n\t" << mensaje << "\n\t";
    dig = _getch();
    while (dig != 13) {

        if (dig < 58 && dig > 47) {
            num.push_back(dig);
            cout << dig;
        }
        dig = _getch();
    }
    istringstream(num) >> numero;
    return numero;
}