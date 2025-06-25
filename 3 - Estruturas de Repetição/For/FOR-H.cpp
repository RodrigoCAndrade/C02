/**
 * @file: FOR-H.cpp
 * @author: Rodrigo Andrade
 * @date: 13 Mar 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  double sum = 0;

  for (int i = 1; i <= N; i++) {
    sum += (1.0 / i);
  }

  cout << fixed << setprecision(4) << sum;
  return 0;
}
