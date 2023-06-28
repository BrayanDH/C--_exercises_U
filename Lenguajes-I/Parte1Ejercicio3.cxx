#include <iostream>
 #include <stdio.h>
 #include<string>
using namespace std;

int main(int argc, char *argv[])
{
	string luz_encendida;
	
   cout<<"Opciones disponibles:"<<endl;
   cout<<"-Si o si"<<endl;
   cout<<"-No o no"<<endl;
   cout<<"-Soy ciego o soy ciego"<<endl;
   
   
   cout<<"Ingresa una opcion:"<<endl;
   cin>>luz_encendida;
	
	if (luz_encendida == "Si" || luz_encendida == "si"){
	    
	    cout<<"La luz esta encendida en la habitacion"<<endl;
	    }
	 else if (luz_encendida == "No" || luz_encendida == "no"){
	    	    
	    	    cout<<"La luz esta apagada en la habitacion"<<endl;
	    	    
	    }
	 else if (luz_encendida == "Ciego" || luz_encendida == "ciego"){
	 	    
	 	    cout<<"Mi vista es muy buena como para saber si la luz esta encendida o esta apagada"<<endl;
	 	    
	 	    }
	 else{
	        
	        cout<<"No ingresaste una opcion valida"<<endl;
	     
	     }
	 
	    
}