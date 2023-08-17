// Brayan David Hernandez - 20192030209

#include <iostream>
#include <wchar.h>
using namespace std;
int main()
{
  setlocale(LC_ALL, "");
  // declara una constante entera llamada size y le asigna el valor 5.
  // La palabra clave const se utiliza para indicar que el valor
  // de la variable no se puede cambiar después de su inicialización.

  int cantidad;
  cout << "Ingrese la cantidad de elementos que desea ingresar: " << endl;
  cin >> cantidad;
  int arr[cantidad];
  for (int i = 0; i < cantidad; ++i)
  {
    cout << "Ingrese el elemento: " << i + 1 << endl;
    cin >> arr[i];
  }

  // Uso de un puntero para recorrer el arreglo y realizar la suma
  int *ptr = arr;
  int suma = 0;
  /// tercera ronda ¿Cuánto vale i, cuánto vale en la línea 17 suma y en la
  // linea 19 suma
  for (int i = 0; i < cantidad; ++i)
  {
    suma += *ptr; // suma=suma + *ptr
    ++ptr;        // ptr=ptr+1
  }

  cout << "La suma de los elementos del arreglo es: " << suma << endl;

  return 0;
}
