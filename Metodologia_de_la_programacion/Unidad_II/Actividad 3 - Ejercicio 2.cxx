// Autor: Brayan David Hernandez
// Numero de cuenta: 20192030209
// Actividad 3 - Ejercicio 2

#include <iostream>
using namespace std;

int main()
{
    //Declaracion de variable e ingreso de datos
    string palabra;
    int CantidadARepetir;
    char ControladorDeSeleccion;
    cout<<"Ingrese una palabra: ";
    cin>>palabra;
    cout<<"Desea repetir la palabra 10 veces? S/N: "<<endl;
    cin>>ControladorDeSeleccion ;


    // Declaracion del bucle y salida de datos
    if (ControladorDeSeleccion == 'S'){
        CantidadARepetir = 10;
        }
    else{
            if (ControladorDeSeleccion == 'N'){
                     cout<<"Ingrese la cantidad de veces: ";
         cin>>CantidadARepetir;
             }
             else{
                 cout<<"Debe ingresar una opcion valida";
                 }

          }

    // Declaracion del primer bucle y salida de datos
        for (int iterador = 1; iterador <= CantidadARepetir; iterador++) {
        cout<<iterador<<".-"<<palabra<<", ";

    }

    // Espacios para ordenar la salida de datos
    cout<<endl;
    cout<<endl;

    // Declaracion del segundo bucle y salida de datos
    for (int iterador = 1; iterador <= CantidadARepetir; iterador++) {
        cout<<iterador<<".-"<<palabra<<endl;

    }



    return 0;
}
