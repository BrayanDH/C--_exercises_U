#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

double multiplicar(double num1, double num2)
{
  double multiplicar;
  multiplicar = num1 * num2;
  return multiplicar;
}

int main(int argc, char *argv[])
{
  double n1;
  double n2;
  cout << "Ingrese num1: ";
  cin >> n1;

  cout << "Ingrese num2: ";
  cin >> n2;

  double result = multiplicar(n1, n2);
  cout << "El resultado es: " << result << endl;
}
