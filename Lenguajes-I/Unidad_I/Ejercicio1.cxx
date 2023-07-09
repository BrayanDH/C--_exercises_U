// Ejercicio 1

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{

	// Tamaño de la poblacion
	float N;
	cout << "Ingrese el tamanio de la poblacion: ";
	cin >> N;

	// Tamaño de muestra buscado
	float n;

	// Parametro estadistico(depende del nivel confianza)
	float Z;
	cout << "Ingrese el parametro estadistico: ";
	cin >> Z;

	// margen de error
	float e;
	cout << "Ingrese el margen de error: ";
	cin >> e;

	// probabilidad de que ocurra el evento
	float p;
	cout << "Ingrese la probabilidad de que ocurra el evento: ";
	cin >> p;

	// probabilidad de que no ocurra el evento
	float q;
	cout << "Ingrese la probabilidad de que no ocurra el evento: ";
	cin >> q;

	n = ((N * (Z * 2)) * p * q) / ((e * 2) * (N - 1) + (Z * 2) * p * q);

	cout << "La probabilidad es: " << endl;
	cout << n;
}