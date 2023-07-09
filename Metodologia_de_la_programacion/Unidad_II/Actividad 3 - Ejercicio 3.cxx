// Autor: Brayan David Hernandez
// Numero de cuenta: 20192030209
// Actividad 3 - Ejercicio 3

#include <iostream>
using namespace std;

int main()
{

    //Declaracion de variable e ingreso de datos
    string color;
    int cantidadARepetir = 0;
    cout << "Ingrese su color: ";
    cin >> color;

    // Evaluacion y salida de datos
    if (color == "Amarillo" || color == "amarillo")
    {
        cantidadARepetir = 5;
    }

    else if (color == "Negro" || color == "negro")
    {
        cantidadARepetir = 6;
    }

    else if (color == "Rosado" || color == "rosado")
    {
        cantidadARepetir = 3;
    }

    else if (color == "Azul" || color == "azul")
    {
        cantidadARepetir = 1;
    }

    else
    {
        cout << "Ingrese una opcion valida";
    }

    for (int iterador = 1; iterador <= cantidadARepetir; iterador++)
    {
        cout << iterador << ".-" << color << endl;
    }

    return 0;
}
