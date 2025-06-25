/**
 * @file: FUN-Passagem_de_parametros_por_referencia_1.cpp
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

void media(int x, int y, float &m) { m = sqrt(x * y); }

int main() {
  int x, y;
  cin >> x >> y;

  float m = 0;

  media(x, y, m);

  cout << "Media: " << fixed << setprecision(2) << m << endl;

  return 0;
}
