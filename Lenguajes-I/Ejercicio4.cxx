// Ejercicio 4

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class persona
{
public:
  string nombre;
  string saludo;

  void presentacion() const
  {
    cout << "Hola soy " << nombre << " y digo " << saludo << endl;
    cout << "----------------------------------------------------" << endl;
  }
};

class fruta
{
public:
  string nombre;
  string sabor;

  void presentacion() const
  {
    cout << "Hola soy un " << nombre << " y sabo a:  " << sabor << endl;
    cout << "----------------------------------------------------" << endl;
  }
};

class animal
{
public:
  string nombre;
  string saludo;

  void presentacionAnimal() const
  {
    cout << "Hola soy un/a " << nombre << " y hago " << saludo << endl;
  }
};
int main(int argc, char *argv[])
{

  persona nathaly;
  nathaly.nombre = "Nathaly";
  nathaly.saludo = "sapo perro";
  nathaly.presentacion();

  fruta aguacate;
  aguacate.nombre = "aguacate";
  aguacate.sabor = "no tengo sabor";
  aguacate.presentacion();

  animal cerdo;
  cerdo.nombre = "cerdo";
  cerdo.saludo = "oink";
  cerdo.presentacionAnimal();
};