/**
 * @file: FUN-Delta.cpp
 * @author: Rodrigo Andrade
 * @date: 28 May 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iomanip>
#include <iostream>

using namespace std;

float calc_delta(float a, float b, float c) { return (b * b) - (4 * a * c); }

int main() {
  float a, b, c;
  cin >> a >> b >> c;

  cout << "delta = " << calc_delta(a, b, c) << fixed << setprecision(2) << endl;

  return 0;
}
