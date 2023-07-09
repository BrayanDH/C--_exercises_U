// Autor: Brayan David Hernandez
// Numero de cuenta: 20192030209
// Ejercicio 3 del tercer parcial
#include <iostream>
using namespace std;


int main()
{
	float numero1 = 0;
	float numero2 = 0;
	int opcion = 0;
	
	cout << "Ingrese su primer numero: ";
	cin >> numero1;
	  
    cout << "Ingrese su segundo numero: ";
	cin >> numero2;
	  
	 cout<<"Que operacion desea realizar: "<<endl;
	 cout << "1) Sumar los dos valores: "<<endl;
	 cout << "2) Restar del primer valor el segundo: "<<endl;
	 cout << "3) Dividir el primero entre el segundo "<<endl;
	 
	 cin>>opcion;
	 
	 switch(opcion){
	     
	     case 1:
	     cout<<"El resultado es: " << numero1 + numero2;
	     break;
	     
	     case 2:
	     cout<<"El resultado es: " << numero1 - numero2;
	     break;
	     
	     case 3:
	     cout<<"El resultado es: " << numero1 / numero2;
	     break;
	     
	     default:
	     cout << "Opcion no valida";
	     break;
	 }
	 
	 return 0;
}
	     
	 
	 
	 
	
