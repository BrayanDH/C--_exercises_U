// Autor: Brayan David Hernandez
// Numero de cuenta: 20192030209
// Actividad 1 - Ejercicio 3


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
     // Inciso 1
     // Ingreso de datos
     int numero1 = 0;
     int numero2 = 0;
     int numero3 = 0;
     int numero4 = 0;
     int resultado = 0;


     // Inciso 2
     // Almacenar resultados
     cout << "Ingresar numero 1: ";
     cin >> numero1;
     cout << "Ingresar numero 2: ";
     cin >> numero2;
     cout << "Ingresar numero 3: ";
     cin >> numero3;
     cout << "Ingresar numero 4: ";
     cin >> numero4;
     cout << "Resultados: " << endl;

     // Operaciones

     // 3
     resultado = (numero1 + numero2) * (numero3 - numero4);
     cout << "El primer resultado es: ";
     cout << resultado << endl
          << endl;

     // 4
     resultado = 0;
     resultado = (numero1 * numero1) + (numero2 + numero3 + numero4);
     cout << "El segundo resultado es: ";
     cout << resultado << endl
          << endl;

     // 5 y 6
     resultado = 0;
     resultado = (numero1 * numero1) + (numero2 * numero2) + (numero3 * numero3) + (numero4 * numero4);
     cout << "El tercer resultado es: ";
     cout << resultado << endl
          << endl;

     // 7
     resultado = 0;
     resultado = pow((numero1 + numero2), 0) + (numero3 + numero4);
     cout << "El ultimo resultado es: ";
     cout << resultado << endl
          << endl;

     return 0;
}
