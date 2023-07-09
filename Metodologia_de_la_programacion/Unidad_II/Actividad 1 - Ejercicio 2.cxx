// Autor: Brayan David Hernandez
// Numero de cuenta: 20192030209
// Actividad 1 - Ejercicio 2


#include <iostream>
using namespace std;

int main()
{
  // Declarar las variables
  int AnnioDeEntrada = 0;
  int annioCorriente = 2023;
  int annioEnlau;

  // Ingresar los datos
  cout << "Ingrese su año de entrada: ";
  cin >> AnnioDeEntrada;
  annioEnlau = annioCorriente - AnnioDeEntrada;
  cout << "Tienes: " << annioEnlau << " años en la Universidad";

  return 0;
}
