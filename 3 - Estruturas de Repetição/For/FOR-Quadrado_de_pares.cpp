/**
 * @file: FOR-Quadrado_de_pares.cpp
 * @author: Rodrigo Andrade
 * @date: 13 Mar 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  // Número limite de quadrado pares.
  int N;
  cin >> N;

  // Calculando quadrados pares até N.
  for (int i = 2; i <= N; i += 2) cout << i << "^2 = " << (i * i) << endl;

  return 0;
}
