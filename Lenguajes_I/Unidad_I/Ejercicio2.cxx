// Ejercicio 2

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>

using namespace std;

int main()
{

    float a;
    cout << "Ingrese a: ";
    cin >> a;

    float b;
    cout << "Ingrese b: ";
    cin >> b;

    float c;
    cout << "Ingrese c: ";
    cin >> c;

    float x1;
    float x2;
    float delta;

    delta = (b * 2) - ((4 * a * c) / (2 * a));

    if (delta < 0)
    {
        cout << "Esta ecuacion no tiene soluci/on";
    }
    else
    {
        x1 = (-b) + sqrt(delta);
        x2 = (-b) - sqrt(delta);

        cout << "Resultado para x1 : ";
        cout << x1 << endl;
        cout << "Resultado para x2: ";
        cout << x2 << endl;
    }
}