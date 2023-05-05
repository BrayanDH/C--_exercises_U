// Autor: Brayan David Hernandez
// Numero de cuenta: 20192030209
// Actividad 2 - Ejercicio 2
#include <iostream>
using namespace std;


int main()
{
    //Declaracion de variables e ingreso de datos
    int edad;
    cout<<"Ingrese su edad: ";
    cin>>edad;

    // Evaluacion y salida de datos
    if(edad < 0)
    cout<<"No existe la edad negativa";
    
    if(edad >= 0 && edad <= 12 )
    cout<<"Eres un niño";
    
    if(edad >=13 && edad <= 21)
    cout<<"Eres un adolescente";
    
    if(edad >=22 && edad <= 60)
    cout<<"Eres un adulto";
    
    if(edad >=61)
    cout<<"Eres un adulto mayor";
    
    return 0;
    
}
