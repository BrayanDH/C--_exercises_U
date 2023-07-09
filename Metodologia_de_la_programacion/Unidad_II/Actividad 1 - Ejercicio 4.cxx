// Autor: Brayan David Hernandez
// Numero de cuenta: 20192030209
// Actividad 1 - Ejercicio 4


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Declaracion de variables
    string nombre1;
    string nombre2;
    string apellido1;
    string apellido2;
    int annioDeNacimiento;
    int annioActual = 2023;

    //Entrada de datos
    cout<< "Ingrese su primer nombre: ";
    cin >>nombre1;
    cout<< "Ingrese su segundo nombre: ";
    cin >>nombre2;
    cout<< "Ingrese su primer apellido: ";
    cin >>apellido1;
    cout<< "Ingrese su segundo apellido: ";
    cin >>apellido2;
    cout<< "Ingrese su año de nacimiento: ";
    cin >>annioDeNacimiento;

    //Salida de datos
    cout<< "Señor " << nombre1 << " "<<nombre2<<" "<< apellido1<<" "<<apellido2<<", su edad es: "<<annioActual - annioDeNacimiento;
 

    return 0;
}
