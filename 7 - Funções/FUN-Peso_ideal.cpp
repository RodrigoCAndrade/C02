/**
 * @file: FUN-Peso_ideal.cpp
 * @author: Rodrigo Andrade
 * @date: 19 May 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iomanip>
#include <iostream>

using namespace std;

float ideal(float h, char sexo) {
  switch (sexo) {
    case 'M':
      return 72.7 * h - 58;
      break;
    case 'F':
      return 62.1 * h - 44.7;
      break;
    default:
      return 0;
      break;
  }
}

int main() {
  float h;
  char sexo;

  cin >> h >> sexo;

  cout << "Peso ideal = " << fixed << setprecision(2) << ideal(h, sexo) << " kg"
       << endl;

  return 0;
}
