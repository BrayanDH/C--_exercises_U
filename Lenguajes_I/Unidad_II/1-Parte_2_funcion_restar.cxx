#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

double restar(double num1, double num2)
{
  double restar;
  restar = num1 - num2;
  return restar;
}

int main(int argc, char *argv[])
{
  double n1;
  double n2;
  cout << "Ingrese num1: ";
  cin >> n1;

  cout << "Ingrese num2: ";
  cin >> n2;

  double result = restar(n1, n2);
  cout << "El resultado es: " << result << endl;
}
