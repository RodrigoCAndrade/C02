/**
 * @file: IF-Coordenadas_de_um_ponto.cpp
 * @author: Rodrigo Andrade
 * @date: 22 Feb 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>

using namespace std;

int main() {
  float x, y;
  cin >> x >> y;

  if (x == 0 && y == 0) {
    cout << "Origem" << endl;
  } else if (x != 0 && y == 0) {
    cout << "Eixo X" << endl;
  } else if (y != 0 && x == 0) {
    cout << "Eixo Y" << endl;
  } else if (x > 0) {
    if (y > 0) {
      cout << "Q1" << endl;
    } else
      cout << "Q4" << endl;
  } else if (x < 0) {
    if (y > 0) {
      cout << "Q2" << endl;
    } else
      cout << "Q3" << endl;
  }

  return 0;
}
