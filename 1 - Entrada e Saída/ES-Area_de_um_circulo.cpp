/**
 * @file: ES-Area_de_um_circulo.cpp
 * @author: Rodrigo Andrade
 * @date: 17 Feb 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  float raio;
  cin >> raio;

  cout << "AREA = " << fixed << setprecision(3) << (3.14159 * (raio * raio));

  return 0;
}
