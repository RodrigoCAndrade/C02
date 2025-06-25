/**
 * @file: IF-Formula_de_Baskara.cpp
 * @author: Rodrigo Andrade
 * @date: 22 Feb 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double A, B, C;

  cin >> A >> B >> C;

  double delta = (B * B) - (4 * A * C);

  if (delta < 0 || A == 0) {
    cout << "Impossivel calcular" << endl;
    return -1;
  }

  double xm = (-B - sqrt(delta)) / (2 * A);
  double xp = (-B + sqrt(delta)) / (2 * A);

  cout << "R1 = " << fixed << setprecision(5) << xp << endl;
  cout << "R2 = " << fixed << setprecision(5) << xm << endl;

  return 0;
}
