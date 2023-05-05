// Autor: Brayan David Hernandez
// Numero de cuenta: 20192030209
// Ejercicio 2 del tercer parcial

#include <iostream>
using namespace std;




int main(){

cout << "Ingrese una nota negativa para salir"<<endl;

float nota = 0;
float suma = 0;
int ingreso = 0;

	do{
	    cout << "Ingrese una nota: ";
	    cin >> nota;
	    
	     if( nota > 0) 
	     {
	         suma = suma + nota;
	         ingreso++;
	     }
	    }
	
	while(nota > 0);
	//system("PAUSE");
	
	cout << "Usted sumo: " << ingreso << " notas."<< endl;
	cout << "Su promedio: " << suma / ingreso;
	return 0;
}