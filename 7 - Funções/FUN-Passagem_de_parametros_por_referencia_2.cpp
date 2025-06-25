/**
 * @file: FUN-Passagem_de_parametros_por_referencia_2.cpp
 * @author: Rodrigo Andrade
 * @date: 29 May 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

void converte(float F, float &C, float &K) {
  C = ((float)5 / 9) * (F - 32);  // 0
  K = C + 273;
}

int main() {
  float F;
  cin >> F;

  float C = 0;
  float K = 0;

  converte(F, C, K);

  cout << "Celsius: " << fixed << setprecision(2) << C << endl;
  cout << "Kelvin: " << fixed << setprecision(2) << K << endl;

  return 0;
}
