/**
 * @file: ES-Gaussiana.cpp
 * @author: Rodrigo Andrade
 * @date: 17 Feb 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

void gaussiana(double &fx, double &x, double &m, double &s) {
  fx =
      1 / sqrt(2 * 3.14159 * s * s) * exp(-(((x - m) * (x - m)) / (2 * s * s)));
}

int main() {
  // Definindo as variáveis x (ponto), m (média) e s (desvio padrão).
  double x, m, s;

  // Obtendo os valores do usuário.
  cin >> x >> m >> s;

  // Calculando a gaussiana.
  double fx;
  gaussiana(fx, x, m, s);

  // Imprimindo o resultado da gaussiana com 4 casas decimais.
  cout << fixed << setprecision(4) << fx << endl;

  return 0;
}
