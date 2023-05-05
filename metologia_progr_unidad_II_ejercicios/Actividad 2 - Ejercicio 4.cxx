// Autor: Brayan David Hernandez
// Numero de cuenta: 20192030209
// Actividad 2 - Ejercicio 4

#include <iostream>
using namespace std;

int main () {

    //Declaracion de variable e ingreso de datos
    float valorAEvaluar = 0;
    cout<<"ingrese un valor entre 0 y 10: ";
    cin>>valorAEvaluar;


    // Evaluacion y salida de datos
        if (valorAEvaluar < 0 || valorAEvaluar > 10){
            cout<<"Su valor no es valido";
        }
        else {
            if (valorAEvaluar > 6.5)
            {
                cout<<"A";
            }
            else
            {
                cout<<"R";
            }
        }

    return 0;
}
