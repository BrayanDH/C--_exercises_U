// Autor: Brayan David Hernandez
// Numero de cuenta: 20192030209
// Ejercicio 1del tercer parcial

#include <iostream>
using namespace std;

int main(){
float suma = 0;
float nota = 0;
int contador_notas = 0;

cout << "Ingrese una nota negativa para salir"<<endl;

while (nota>=0){
	      cout << "Ingrese una nota: ";
	      cin >> nota;

	       if (nota > 0){
	           suma = suma +  nota;
	           contador_notas++;
	       }
	    }
	      cout << "Su promedio es: ";
	      cout<<suma/contador_notas;
	      return 0;
     
}