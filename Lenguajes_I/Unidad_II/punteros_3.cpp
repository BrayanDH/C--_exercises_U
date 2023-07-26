// Figura 8.4: fig08_04.cpp
// Los operadores & y * de los apuntadores.
#include <iostream>
#include <fstream> // Incluir la biblioteca para trabajar con archivos
#include <string>
#include <wchar.h>

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
using namespace std;

// utilizando el espacio de nombres estándar;
int main()
{
  int a = 7; // se asigna un 7 a la variable a

  int *aPtr = &a; // aPtr se inicializa con la dirección de la variable int a
  cout << "La direccion de a es " << &a << "\nEl valor de aPtr es " << aPtr;
  cout << "\n\nEl valor de a es " << a << "\nEl valor de *aPtr es " << *aPtr << endl;

  return 0;
}