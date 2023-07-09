#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

// Funcion para mover el cursor a una posicion especifica en la consola
void Gotoxy(int x, int y)
{
  // Crear una estructura COORD con coordenadas
  COORD coord;
  coord.X = x;
  coord.Y = y;
  // Obtener el handle de la consola y establecer la posicion del cursor
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
  int factura;

  Gotoxy(3, 1);
  cout << "Factura: ";
  cin >> factura;

  int fecha;
  Gotoxy(25, 1);
  cout << "Fecha: ";
  cin >> fecha;

  int cliente;
  Gotoxy(40, 1);
  cout << "Cliente: ";
  cin >> cliente;

  return 0;
}