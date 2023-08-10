// Analizador de Sentimientos

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Constantes para los nombres de archivos
const string INPUT_FILE = "texto_a_analizar.txt";
const string OUTPUT_FILE = "sentimiento.txt";

// Función para dibujar carita feliz
void drawHappyFace()
{
  cout << "El sentimiento es positivo" << endl;

  cout << "      **      " << endl;
  cout << "   *      *    " << endl;
  cout << " *   *  *   *  " << endl;
  cout << "*            * " << endl;
  cout << "*    \\__/    * " << endl;
  cout << " *          *   " << endl;
  cout << "  *        *     " << endl;
  cout << "      **      " << endl;
  cout << endl;
  cout << endl;
}

// Función para dibujar carita triste
void drawSadFace()
{
  // dibujame una carita triste con cout
  cout << "      **      " << endl;
  cout << "   *      *    " << endl;
  cout << " *   *  *   *  " << endl;
  cout << "*            * " << endl;
  cout << "*    ____    * " << endl;
  cout << " *  /    \\  *   " << endl;
  cout << "  *        *     " << endl;
  cout << "      **      " << endl;
}

int main()
{

  string texto, sentimiento;

  // Leer texto de entrada
  cout << "Ingrese texto: ";
  getline(cin, texto);

  // Guardar texto en archivo
  ofstream archivoEntrada(INPUT_FILE.c_str());
  if (!archivoEntrada.is_open())
  {
    cerr << "Error al abrir archivo entrada" << endl;
    return 1;
  }
  archivoEntrada << texto << endl;
  archivoEntrada.close();

  // Ejecutar script de analisis
  system("sentiment_get.py");

  // Leer resultado de salida
  ifstream archivoSalida(OUTPUT_FILE.c_str());
  if (!archivoSalida.is_open())
  {
    cerr << "Error al abrir archivo salida" << endl;
    return 1;
  }
  getline(archivoSalida, sentimiento);

  // Mostrar resultado
  if (sentimiento == "positive")
  {
    drawHappyFace();
  }
  else if (sentimiento == "negative")
  {
    drawSadFace();
  }
  else
  {
    cout << "Sentimiento desconocido";
  }

  return 0;
}