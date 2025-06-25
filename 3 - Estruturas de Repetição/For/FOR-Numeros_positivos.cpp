/**
 * @file: FOR-Numeros_positivos.cpp
 * @author: Rodrigo Andrade
 * @date: 13 Mar 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>

using namespace std;

int main() {
  int total = 0;
  int N;

  for (int i = 0; i < 6; i++) {
    cin >> N;
    if (N > 0) total++;
  }

  cout << total << " valores positivos";

  return 0;
}
