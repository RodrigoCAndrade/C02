/**
 * @file: WHILE-Quadrante.cpp
 * @author: Rodrigo Andrade
 * @date: 20 Mar 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>

using namespace std;

int main() {
  int x, y;

  while (cin >> x >> y && x != 0 && y != 0) {
    if (x > 0 && y > 0) {
      cout << "primeiro" << endl;
    } else if (x < 0 && y > 0) {
      cout << "segundo" << endl;
    } else if (x < 0 && y < 0) {
      cout << "terceiro" << endl;
    } else
      cout << "quarto" << endl;
  }

  return 0;
}
