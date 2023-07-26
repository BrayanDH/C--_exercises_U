#include <iostream>
#include <fstream> // Incluir la biblioteca para trabajar con archivos
#include <string>
#include <wchar.h>

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
using namespace std;

int main(void)
{
  setlocale(LC_ALL, "");

  // declarar variable y puntero
  int numero;

  // pedir valor de la variable
  cout << "Digite un numero: ";
  cin >> numero;

  int *pnumero = &numero;

  // mostrar el valor de la variable y puntero
  cout << "El valor de la variable es: " << numero << endl;
  cout << "El valor del puntero es: " << *pnumero << endl;

  return 0;
}