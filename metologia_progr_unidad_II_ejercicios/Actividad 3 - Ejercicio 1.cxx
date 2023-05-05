// Autor: Brayan David Hernandez
// Numero de cuenta: 20192030209
// Actividad 3 - Ejercicio 1

#include <iostream>
using namespace std;

int main()
{
    //Declaracion de variable e ingreso de datos
    string palabraAMostrar;
    int CantidadDeVeces;
    cout<<"Ingrese una palabra: ";
    cin>>palabraAMostrar;
    cout<<"Ahora las veces que la desea repetir: ";
    cin>>CantidadDeVeces;

    // Declaracion del bucle y salida de datos
    for (int iterador = 1; iterador <= CantidadDeVeces; iterador++) {
        cout<<iterador<<".-"<<palabraAMostrar<<endl;

    }

    return 0;
}

