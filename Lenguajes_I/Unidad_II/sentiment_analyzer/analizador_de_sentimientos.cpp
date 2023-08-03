#include <iostream>
#include <windows.h>
#include <string>
#include <stdlib.h>
#include <wchar.h>
#include <fstream>
#include <locale.h>
#include <stdio.h>

using namespace std;

// Funci�n para mover el cursor a una posici�n espec�fica en la consola
void gotoxy(int x, int y)
{
  // Crear una estructura COORD con coordenadas
  COORD coord;
  coord.X = x;
  coord.Y = y;
  // Obtener el handle de la consola y establecer la posici�n del cursor
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(void)
{
  setlocale(LC_ALL, "");

  string texto;
  cout << "Ingrese el texto a analizar: " << endl;
  getline(cin, texto); // Utilizamos getline() para leer todo lo que el usuario ingresa

  // abrir el archivo texto_a_analizar.txt y escribir el texto ingresado por el usuario
  // abrir el archivo
  ofstream archivo("texto_a_analizar.txt", std::ios::out);

  // Verificar si el archivo se abri� correctamente
  if (!archivo.is_open())
  {
    cerr << "Error al abrir el archivo." << endl;
    return 0;
  }

  // Escribir en el archivo
  archivo << texto << endl;

  // Cerrar el archivo
  archivo.close();

  // ejecutar el comando para ejecutar el script de python
  system("sentiment_get.py");

  // guardar el contenido del archivo sentimiento.txt en una variable
  // abrir el archivo sentimiento.txt
  ifstream archivo2("sentimiento.txt");

  // Verificar si el archivo se abri� correctamente
  if (!archivo2.is_open())
  {
    cerr << "Error al abrir el archivo." << endl;
    return 0;
  }

  // Leer el archivo
  string linea;
  while (getline(archivo2, linea))
  {
    // cout << "El sentimiento es: " << linea << endl;
  }

  // Cerrar el archivo
  archivo2.close();

  if (linea == "positive")
  {
    cout << "El sentimiento es positivo" << endl;
    cout << "      **      " << endl;
    cout << "   *      *    " << endl;
    cout << " *   *  *   *  " << endl;
    cout << "*            * " << endl;
    cout << "*    \\__/    * " << endl;
    cout << " *          *   " << endl;
    cout << "  *        *     " << endl;
    cout << "      **      " << endl;
    cout << endl;
    cout << endl;
  }
  else if (linea == "negative")
  {
    cout << "El sentimiento es negativo" << endl;
    // dibujame una carita triste con cout
    cout << "      **      " << endl;
    cout << "   *      *    " << endl;
    cout << " *   *  *   *  " << endl;
    cout << "*            * " << endl;
    cout << "*    ____    * " << endl;
    cout << " *  /    \\  *   " << endl;
    cout << "  *        *     " << endl;
    cout << "      **      " << endl;
  }
  else if (linea == "neutral")
  {
    cout << "El sentimiento es neutral" << endl;
    cout << "      **      " << endl;
    cout << "   *      *    " << endl;
    cout << " *   *  *   *  " << endl;
    cout << "*            * " << endl;
    cout << "*    ____    * " << endl;
    cout << " *          *   " << endl;
    cout << "  *        *     " << endl;
    cout << "      **      " << endl;
  }
  else
  {
    cout << "No se pudo determinar el sentimiento" << endl;
  }

  return 0;
}
