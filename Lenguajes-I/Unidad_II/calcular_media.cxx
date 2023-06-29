#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

double calcular_media(double num1, double num2)
{
  double median;
  median = (num1 + num2) / 2;
  return median;
}

int main(int argc, char *argv[])
{
  double n1;
  double n2;
  cout << "Ingrese num1: ";
  cin >> n1;

  cout << "Ingrese num2: ";
  cin >> n2;

  double result = calcular_media(n1, n2);
  cout << "El resultado es: " << result << endl;
}
