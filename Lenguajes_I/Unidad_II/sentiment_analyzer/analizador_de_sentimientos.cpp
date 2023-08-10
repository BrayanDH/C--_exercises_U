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
<<<<<<< HEAD
  system("sentiment_get.py");
=======
  system("python sentiment_get.py");
>>>>>>> 3ea890f847ce51394156dfcf8a5f249587ebafca

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
<<<<<<< HEAD
    // cout << "El sentimiento es: " << linea << endl;
=======
    cout << "El sentimiento es: " << linea << endl;
>>>>>>> 3ea890f847ce51394156dfcf8a5f249587ebafca
  }

  // Cerrar el archivo
  archivo2.close();

  if (linea == "positive")
  {
    cout << "El sentimiento es positivo" << endl;
<<<<<<< HEAD
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
=======
    // Definimos la posición de la carita en la pantalla
    int x = 10;
    int y = 10;

    // Definimos el tamaño de la carita
    int width = 50;
    int height = 50;

    // Dibujamos la carita con gotoxy() y cout
    gotoxy(x, y);
    cout << ":/" << endl;

    // Dibujamos los ojos
    gotoxy(x + 10, y + 10);
    cout << "oo" << endl;

    // Dibujamos la sonrisa
    gotoxy(x + 20, y + 20);
    cout << "::)" << endl;

    // Dibujamos la nariz
    gotoxy(x + 30, y + 30);
    cout << ":" << endl;

    // Dibujamos la boca
    gotoxy(x + 40, y + 40);
    cout << "::)" << endl;
>>>>>>> 3ea890f847ce51394156dfcf8a5f249587ebafca
  }
  else if (linea == "negative")
  {
    cout << "El sentimiento es negativo" << endl;
<<<<<<< HEAD
    // dibujame una carita triste con cout
    cout << "      **      " << endl;
    cout << "   *      *    " << endl;
    cout << " *   *  *   *  " << endl;
    cout << "*            * " << endl;
    cout << "*    ____    * " << endl;
    cout << " *  /    \\  *   " << endl;
    cout << "  *        *     " << endl;
    cout << "      **      " << endl;
=======
>>>>>>> 3ea890f847ce51394156dfcf8a5f249587ebafca
  }
  else if (linea == "neutral")
  {
    cout << "El sentimiento es neutral" << endl;
<<<<<<< HEAD
    cout << "      **      " << endl;
    cout << "   *      *    " << endl;
    cout << " *   *  *   *  " << endl;
    cout << "*            * " << endl;
    cout << "*    ____    * " << endl;
    cout << " *          *   " << endl;
    cout << "  *        *     " << endl;
    cout << "      **      " << endl;
=======
>>>>>>> 3ea890f847ce51394156dfcf8a5f249587ebafca
  }
  else
  {
    cout << "No se pudo determinar el sentimiento" << endl;
  }

  return 0;
}
