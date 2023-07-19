#include <iostream>
#include <windows.h>
#include <string>
#include <stdlib.h>

using namespace std;

// Funci�n para mover el cursor a una posici�n espec�fica en la consola
void Gotoxy(int x, int y)
{
  // Crear una estructura COORD con coordenadas
  COORD coord;
  coord.X = x;
  coord.Y = y;
  // Obtener el handle de la consola y establecer la posici�n del cursor
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{

  int cuenta;
  string nombre;
  double promedio;
  // agregar nombre y cuenta

  cout << "Cuenta: " << endl;
  cin >> cuenta;

  cout << "Nombre: " << endl;
  cin >> nombre;

  // Ingresar la nota
  int cantidad_notas;
  cout << "Ingrese la cantidad de notas que quiere agregar: " << endl;
  cin >> cantidad_notas;

  int notas[cantidad_notas];

  string codigo_materia = "IA-065";
  string asignatura = "Leng. Prog.2";

  for (int i = 0; i < cantidad_notas; i++)
  {

    cout << "Ingrese la nota " << i + 1 << " : " << endl;
    cin >> notas[i];
  }
  system("CLS");

  // mostrar nombre y cuenta
  cout << "--------------------------------------------------" << endl;
  cout << "|";

  Gotoxy(2, 1);
  cout << "Cuenta: " << cuenta;

  Gotoxy(25, 1);
  cout << "Nombre: " << nombre;

  Gotoxy(48, 1);
  cout << "|" << endl;
  cout << "--------------------------------------------------" << endl;

  string menu[5] = {"-", "Codigo", "Asignatura", "Nota", "Observacion"};

  int contador_menu = 1;
  Gotoxy(contador_menu, 3);
  for (int i = 0; i <= 4; i++)
  {
    cout << menu[i] << endl;
    Gotoxy(contador_menu, 3);
    contador_menu = contador_menu + 15;
  }

  int contador_notas = 5;
  int contador_para_promedio = 0;
  int suma_notas = 0;
  for (int i = 0; i < cantidad_notas; i++)
  {
    // mostrar el codigo de la materia
    Gotoxy(1, contador_notas);
    cout << codigo_materia << endl;

    // mostrar la asignatura
    Gotoxy(16, contador_notas);
    cout << asignatura << endl;

    // mostrar la nota
    Gotoxy(31, contador_notas);
    cout << notas[i] << endl;

    // mostrar si aprobo o no en observacion
    if (notas[i] > 65)
    {
      Gotoxy(46, contador_notas);
      cout << "Aprobado" << endl;
    }
    else
    {
      Gotoxy(46, contador_notas);
      cout << "Reprobado" << endl;
    }
    contador_notas = contador_notas + 2;
    contador_para_promedio++;
    suma_notas = suma_notas + notas[i];
  }
  
  //mostrar el promedio 
  cout << "--------------------------------------------------" << endl;
  promedio = suma_notas / contador_para_promedio;
  Gotoxy(20, contador_notas + 2);
  cout << "Promedio: "<< promedio << endl;

  return 0;
}
