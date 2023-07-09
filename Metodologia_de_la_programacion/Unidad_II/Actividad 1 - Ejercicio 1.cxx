// Autor: Brayan David Hernandez
// Numero de cuenta: 20192030209
// Actividad 1 - Ejercicio 1

#include <iostream>
using namespace std;

int main()
{
  // Declaracion de variables
  int annioDeNacimiento = 0;
  int annioCorriente = 2023;
  int edadActual = 0;

  // Ingreso de datos
  cout << "Ingrese su año de nacimiento: ";
  cin >> annioDeNacimiento;
  edadActual = annioCorriente - annioDeNacimiento;
  cout << "Tiene: " << edadActual << " años";

  return 0;
}
