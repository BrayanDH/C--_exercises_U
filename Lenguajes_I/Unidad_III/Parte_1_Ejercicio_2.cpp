// Brayan David Hernandez - 20192030209

#include <iostream>
#include <wchar.h>
using namespace std;
int main()
{
  setlocale(LC_ALL, "");

  int cantidad;
  cout << "Ingrese la cantidad de elementos que desea ingresar: " << endl;
  cin >> cantidad;
  int arr[cantidad];
  for (int i = 0; i < cantidad; ++i)
  {
    cout << "Ingrese el elemento: " << i + 1 << endl;
    cin >> arr[i];
  }

  int *ptr = arr;

  // Mostrar el contenido del arreglo
  for (int i = 0; i < cantidad; ++i)
  {
    cout << "El contenido " << i + 1 << " del arreglo es: " << *ptr << endl;
    ++ptr;
  }

  return 0;
}
