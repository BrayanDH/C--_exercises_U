#include <iostream>
using namespace std;


int main()
{
	int numero1 = 0;
	int numero2 = 0;
	int opcion = 0;
	
	  
	 cout<<"Que operacion desea realizar: "<<endl;
	 cout << "1) Ejemplo con while"<<endl;
	 cout << "2) Ejemplo con do while"<<endl;
	 cout << "3) Aplicar un arreglo unidinensional"<<endl;
	 cout << "4) usar ciclo for"<<endl;
	 
	 	 cout<<"Ingrese una opcion: "<<endl;
	 cin>>opcion;
	 
	 
	cout << "Ingrese su primer numero: ";
	cin >> numero1;
	  
    cout << "Ingrese su segundo numero: ";
	cin >> numero2;
	
	
	 
	 switch(opcion){
	     
	     default:
	     cout << "Opcion no valida";
	     break;
	 
	     case 1:
	     if (numero1==numero2){
	         cout<<"Los numeros no pueden ser el mismo, se cerrara el programa"<<endl;
	         break;
	         }
	         
	     if (numero1 <= numero2){
	     while (numero1 <= numero2){
	         cout << "Este es un ejemplo con while del: "<<numero1<<" al "<<numero2<<endl;
	         numero1++;
	         }
	     }
	     else{
	         while (numero2<= numero1){
	         cout << "Este es un ejemplo con while del: "<<numero2<<" al "<<numero1<<endl;
	         numero2++;
	         }
	     }
	     break;
	     
	    
	     case 2:
	     do{	     
	     if (numero2<numero1){
	         cout<<"Los numeros no pueden ser el mismo, ni el primero debe ser mayor, se cerrara el programa"<<endl;
	         break;
	         }
	    
	     if( numero1 <= numero2){
	         cout << "Este es un ejemplo con  do while del: "<<numero1<<" al "<<numero2<<endl;
	         numero1++;
	     }
	     
	 }
	while(numero1 <= numero2);
	break;
	 
	 
	 case 4:
	 if(numero2 > numero1){
	     for(int iter = numero1; iter <= numero2; iter++){
	         cout<<"Recorriendo con for de: "<<numero1<< " a "<<numero2<<endl;
	         numero1++;
	}
	}else{
	    cout<<"Para este ejemplo el segundo numero debe ser mayor, cerrando";
	    break;
	}
	break;
	 
	 case 3:
	 int arreglo[] = {numero1, numero2};
	 cout<<"Los valores ingresados en el arreglo son: "<<endl;
	 for(int iter = 0; iter <= 1; iter++) {
	  cout<<arreglo[iter]<<endl;
	}
	 break;
	 }
	 return 0;
}