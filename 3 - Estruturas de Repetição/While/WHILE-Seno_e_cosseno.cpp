/**
 * @file: WHILE-Seno_e_cosseno.cpp
 * @author: Rodrigo Andrade
 * @date: 24 Mar 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <cmath>
#include <iostream>

using namespace std;

int main() {
  float N1, N2, x, start;
  cin >> N1 >> N2;

  // Verificando onde começa positivo
  for (float i = N1; i <= N2; i += 0.1) {
    x = sin(i) * cos(i);
    if (x > 0) {
      start = i;
      break;
    }
  }

  float interator = start;

  while (x > 0) {
    interator += 0.1;
    x = sin(interator) * cos(interator);

    if (x < 0) interator -= 0.1;
  }

  cout << start << " a " << interator;

  return 0;
}
