/**
 * @file: FOR-Numeros_positivos_e_media.cpp
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
  float total = 0;
  float total_value = 0;

  float number;
  for (int i = 0; i < 6; i++) {
    cin >> number;

    if (number > 0) {
      total++;
      total_value += number;
    }
  }

  cout << total << " valores positivos" << endl;
  cout << fixed << setprecision(1) << (total_value / total);
  return 0;
}
