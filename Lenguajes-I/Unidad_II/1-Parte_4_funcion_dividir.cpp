#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

double dividir(double num1, double num2)
{
  double dividir;
  dividir = num1 / num2;
  return dividir;
}

int main(int argc, char *argv[])
{
  double numero1;
  double numero2;
  cout << "Ingrese num1: ";
  cin >> numero1;

  cout << "Ingrese num2: ";
  cin >> numero2;

  if (numero2 <= 0)
  {
    cout << "No se puede dividir entre 0" << endl;
  }
  else
  {
    double result = dividir(numero1, numero2);
    cout << "El resultado es: " << result << endl;
  }
}
