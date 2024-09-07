#include <iostream>

// Alondra S. Rivera Román
// Alosofi
// 801-20-1218
// incluya cualquier colaboración que haga: N/A

using namespace std;

int main(){
  // Propósito del programa
 
  cout << "Hola! Este Programa realiza una suma de  fracciones." << endl;
  cout << "Por favor escriba los numeradores y denominadores de las dos fracciones que desee sumar según corresponda" << endl;
 
  // Recolección de datos 
 
  double num1, deno1, num2, deno2;
  cout << "Escriba el numerador de la fracción 1: ";
  cin >> num1;
  
  cout << "Escribe el denominador de la fracción 1: ";
  cin >> deno1; 
  
  cout << "Escriba el numerador de la fracción 2: ";
  cin >> num2;
  
  cout << "Escriba el denominador de la fracción 2: ";
  cin >> deno2;
  
  // Fórmula para sumar fracciones
  
  double sumaDeFraccionesNUM = (num1 * deno2) + (num2 * deno1);
  double sumaDeFraccionesDENO = (deno1 * deno2);
  cout << sumaDeFraccionesNUM << "/" << sumaDeFraccionesDENO << endl;
  return 0;
}
