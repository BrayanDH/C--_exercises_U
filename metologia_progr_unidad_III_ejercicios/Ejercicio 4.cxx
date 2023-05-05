//Actividad 4 3er Parcial
//Automatizar con ciclo for, el pedido de los valores y también la salida de los valores tanto
//ingresados como los valores que se han digitado a lo interno
#include <iostream>

using namespace std;

int main() 
{
	int valor[4];	
	int valor2[] = {45,222,36};
	
	
	for(int iter = 0; iter <= 3; iter++) {
	    cout<<"ingrese el valor "<<iter+1<<":";
	    cin>>valor [iter];
	}

	//mostrando los elementos ingresados por el usuario
	cout<<"Los valores que usted ha digitado son:"<<endl;
		for(int iter = 0; iter <= 3; iter++) {
	    	cout<<valor[iter]<<endl;
	    }
	    
	//mostrando los elementos ingresados en el programa
	cout<<"Los valores ingresados a lo interno en el programa son: "<<endl;
	for(int iter = 0; iter <= 2; iter++) {
	    	cout<<valor2[iter]<<endl;
	    }
	    
	return 0;
}