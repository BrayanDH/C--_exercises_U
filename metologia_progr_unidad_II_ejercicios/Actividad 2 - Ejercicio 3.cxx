// Autor: Brayan David Hernandez
// Numero de cuenta: 20192030209
// Actividad 2 - Ejercicio 3

#include <iostream>
using namespace std;

int main()
{

    // Declaracion de variable e ingreso de datos
    float precioDeCompra = 0;
    cout << "ingrese precio de compra: ";
    cin >> precioDeCompra;

    // Evaluacion y salida de datos
    if (precioDeCompra > 500 & precioDeCompra <= 1200)
        precioDeCompra = precioDeCompra - (precioDeCompra * 0.10);

    if (precioDeCompra > 1201 & precioDeCompra <= 1500)
        precioDeCompra = precioDeCompra - (precioDeCompra * 0.12);

    if (precioDeCompra > 1500)
        precioDeCompra = precioDeCompra - (precioDeCompra * 0.20);

    cout << "El precio final de compra es: " << precioDeCompra;

    return 0;
}
