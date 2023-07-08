#include <iostream>
using namespace std;

int main()
{
  float suma = 0;
  float multiplicador = 0;
  int contador = 15;

  while (contador <= 50)
  {
    suma = contador + 2;
    multiplicador = contador * 3;
    cout << "El ciclo va por el numero  " << contador << ", al momento y la suma es = " << suma << " y la multiplicacion es " << multiplicador << endl;
    contador++;
  }
  return 0;
}
