/**
 * @file: WHILE-3n+1.cpp
 * @author: Rodrigo Andrade
 * @date: 24 Mar 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>

using namespace std;

int main() {
  int i, j;
  int comprimento, max_comprimento = 0;

  cin >> i >> j;

  int maxij = max(i, j);
  int minij = min(i, j);

  for (int x = minij; x <= maxij; x++) {
    int n = x;
    while (n != 1) {
      if (n % 2 == 0) {
        n = n / 2;
      } else {
        n = (n * 3) + 1;
      }
      comprimento += 1;
    }
    // Quando finaliza é 1, que tem comprimento +1.
    comprimento += 1;
    if (comprimento > max_comprimento) {
      max_comprimento = comprimento;
    }

    comprimento = 0;
  }

  cout << i << " " << j << " " << max_comprimento;

  return 0;
}
