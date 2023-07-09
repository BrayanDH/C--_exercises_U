// Autor: Brayan David Hernandez
// Numero de cuenta: 20192030209
// Actividad 2 - Ejercicio 1

#include <iostream>
using namespace std;

int main()
{
    //Declaracion de variable e ingreso de datos
    int edad=0;
    cout<<"Ingrese su edad: ";
    cin>>edad;

    // Evaluacion y salida de datos
    if (edad >= 21)
    cout<<"Mayor de edad";

    if (edad < 21)
    cout<<"No se venden bebidas a menores de edad";

    return 0;

}
