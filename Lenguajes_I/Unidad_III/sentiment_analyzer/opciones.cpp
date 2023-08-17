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

string linea;
string linea = "positive";

int main(void)
{

  if (linea == "positive")
  {
    cout << "El sentimiento es positivo" << endl;
    cout << " ********** ";
    cout << "*        *";
    cout << "*        *";
  }
}
else if (linea == "negative")
{
  cout << "El sentimiento es negativo" << endl;
}
else if (linea == "neutral")
{
  cout << "El sentimiento es neutral" << endl;
}
else
{
  cout << "No se pudo determinar el sentimiento" << endl;
}
}