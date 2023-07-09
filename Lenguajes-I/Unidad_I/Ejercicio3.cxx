// Ejercicio 3

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
class animal
{
public:
    string nombre;
    string saludo;
    string color;
    string gusto;
    string olor;

    void presentacionAnimal() const
    {
        cout << "Hola soy un/a " << nombre << " y hago " << saludo << endl;
        cout << "Soy de color: " << color << endl;
        cout << "Me gusta: " << gusto << endl;
        cout << "Tengo un olor a: " << olor << endl;

        cout << "----------------------------------------------------" << endl;
    }
};

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

int main(int argc, char *argv[])
{

    animal cerdo;
    cerdo.nombre = "cerdo";
    cerdo.saludo = "oink";
    cerdo.color = "rosado";
    cerdo.gusto = "maiz";
    cerdo.olor = "huelo mal";
    cerdo.presentacionAnimal();

    animal vaca;
    vaca.nombre = "vaca";
    vaca.saludo = "muuh";
    vaca.color = "blanco y negro";
    vaca.gusto = "pasto";
    vaca.olor = "huelo a leche";
    vaca.presentacionAnimal();

    animal perro;
    perro.nombre = "perro";
    perro.saludo = "guau";
    perro.color = "cafe";
    perro.gusto = "carne";
    perro.olor = "perro mojado";
    perro.presentacionAnimal();

    animal gato;
    gato.nombre = "gato";
    gato.saludo = "miau";
    gato.color = "negro";
    gato.gusto = "los ratones";
    gato.olor = "gato limpio";
    gato.presentacionAnimal();

    animal oveja;
    oveja.nombre = "oveja";
    oveja.saludo = "beeeh";
    oveja.color = "blanco";
    oveja.gusto = "pasto";
    oveja.olor = "huelo bien";
    oveja.presentacionAnimal();
}