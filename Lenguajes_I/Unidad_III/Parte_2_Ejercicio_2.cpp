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

  // mostrar los elementos ingresados en forma de arreglo
  cout << "Los elementos ingresados son: " << endl;
  int arr2[cantidad];

  for (int i = 0; i < cantidad; ++i)
  {
    // cout << arr[i] << endl;

    // guardar el valor del arreglo en otro arreglo
    arr2[i] = arr[i];
  }

  // mostrar el arreglo como un arreglo normal y no solo sus valores
  cout << "{ ";

  for (int i = 0; i < cantidad; ++i)
  {
    cout << arr2[i] << " ";
  }

  cout << "} ";

  // sumar los elementos y sacar un promedio

  int suma = 0;
  for (int i = 0; i < cantidad; ++i)
  {
    suma += arr[i];
  }

  cout << endl
       << "La suma de los elementos es: " << suma << endl;
  cout << "El promedio de los elementos es: " << suma / cantidad << endl;

  return 0;
}
