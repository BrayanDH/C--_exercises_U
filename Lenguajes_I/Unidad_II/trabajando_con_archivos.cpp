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
  // Abrir el archivo en modo de escritura con la opci�n de estar al final del archivo
  ofstream archivo("datos.txt", std::ios::app | std::ios::ate);

  // Verificar si el archivo se abri� correctamente
  if (!archivo.is_open())
  {
    cerr << "Error al abrir el archivo." << endl;
    return 0;
  }

  // Colocar el puntero al final del archivo (opcional, para asegurarse)
  archivo.seekp(0, std::ios::end);

  // Pedir la cantidad de datos que se van a grabar
  int cantidad;
  cout << "Ingrese la cantidad de datos que quiere ingresar: " << endl;
  cin >> cantidad;

  // Datos a grabar en el archivo
  string nombre, apellido;

  // guardar los datos en un arreglo bi dimensional
  string datos[cantidad][2];

  // Grabar datos en el archivo
  for (int i = 0; i < cantidad; i++)
  {

    cout << "Grabando el archivo " << i + 1 << " de " << cantidad << endl;
    // Pedir datos
    nombre = "";
    apellido = "";
    cout << "digite nombre: ";
    cin >> nombre;
    cout << "digite Apellido: ";
    cin >> apellido;

    // Guardar datos ingresados en el arreglo
    datos[i][0] = nombre;
    datos[i][1] = apellido;

    // Grabar datos en el archivo
    archivo << "Nombre: " << nombre << endl;
    archivo << "Apellido: " << apellido << endl;
    archivo << endl;
    system("CLS");
  }

  // Mostrar los datos guardos en el arreglo
  cout << "Datos guardados en el arreglo: " << endl;
  for (int i = 0; i < cantidad; i++)
  {
    cout << "Nombre: " << datos[i][0] << endl;
    cout << "Apellido: " << datos[i][1] << endl;
    cout << endl;
  }

  // Cerrar el archivo
  archivo.close();

  cout << "Datos grabados en el archivo correctamente." << endl;

  return EXIT_SUCCESS;
}
