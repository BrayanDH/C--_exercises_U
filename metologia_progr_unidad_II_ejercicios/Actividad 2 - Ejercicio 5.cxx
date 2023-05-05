// Autor: Brayan David Hernandez
// Numero de cuenta: 20192030209
// Actividad 2 - Ejercicio 5

#include <iostream>
using namespace std;

int main()
{

    //Declaracion de variable e ingreso de datos
    int numero1, numero2;
    cout << "Ingrese su número entre 0 y 10: ";
    cin >> numero1;
    cout << "Ingrese otro número entre 0 y 10: ";
    cin >> numero2;

    // Evaluacion y salida de datos
    if (numero1 == 2 || numero1 == 9) {
        if (numero2 == 2 || numero2 == 9) {
            cout << "Acerto";
        } else {
            cout << "Acerto 50%";
        }
    } else {
        if (numero2 == 2 || numero2 == 9) {
            cout << "Acerto 50%";
        } else {
            cout << "No acerto";
        }
    }

    return 0;
}
