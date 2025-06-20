// Author: Rodrigo Andrade
// Date: 17.02.25

#include <iostream>
#include <iomanip>

using namespace std;

float area_triangulo_retangulo(float A, float C) {
  return (A * C)/2;
}

float area_circulo(float C) {
  return (3.14159 * C * C);
}

float area_trapezio(float A, float B, float C) {
  return ((A + B) * C)/2;
}

float area_quadrado(float B) {
  return (B * B);
}

float area_retangulo(float A, float B) {
  return (A * B);
}

int main() {
  // Armazena e lê as variáveis A, B e C.
  float A, B, C;
  cin >> A >> B >> C;

  // Imprime as áreas das figuras geométricas com 3 casas decimais.
  cout << "TRIANGULO: " << fixed << setprecision(3) << area_triangulo_retangulo(A, C) << endl;
  cout << "CIRCULO: " << fixed << setprecision(3) << area_circulo(C) << endl;
  cout << "TRAPEZIO: " << fixed << setprecision(3) << area_trapezio(A, B, C) << endl;
  cout << "QUADRADO: " << fixed << setprecision(3) << area_quadrado(B) << endl;
  cout << "RETANGULO: " << fixed << setprecision(3) << area_retangulo(A, B);

  return 0;
}
