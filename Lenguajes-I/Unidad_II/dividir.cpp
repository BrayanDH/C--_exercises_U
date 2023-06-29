#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

double dividir(double num1, double num2)
{
  double dividir;
  double numero2 = num2;
  dividir = num1 / numero2;
  return dividir;

}

int main(int argc, char *argv[])
{
  double n1;
  double n2;
  cout << "Ingrese num1: ";
  cin >> n1;

  cout << "Ingrese num2: ";
  cin >> n2;
  
  if (n2 <= 0){
  	cout << "No se puede dividir entre 0" << endl;
  }
  else {
  	  double result = dividir(n1, n2);
	  cout << "El resultado es: " << result << endl;
  	
  }


}
