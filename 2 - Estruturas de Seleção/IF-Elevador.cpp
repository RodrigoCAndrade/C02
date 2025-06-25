/**
 * @file: IF-Elevador.cpp
 * @author: Rodrigo Andrade
 * @date: 6 Mar 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int C, L, R1, R2;
  cin >> L >> C >> R1 >> R2;

  int r = max(R1, R2);

  if (r <= C && r <= L) {
    if (sqrt(pow((L - R2 - R1), 2) + pow((C - R2 - R1), 2)) >= R1 + R2) {
      cout << "S" << endl;
      return 0;
    }
  }

  cout << "N" << endl;
  return 0;
}
