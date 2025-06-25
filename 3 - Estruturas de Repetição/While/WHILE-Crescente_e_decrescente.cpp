/**
 * @file: WHILE-Crescente_e_decrescente.cpp
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

  while (cin >> x >> y && x != y) {
    if (x > y) {
      cout << "Decrescente" << endl;
    } else
      cout << "Crescente" << endl;
  }

  return 0;
}
