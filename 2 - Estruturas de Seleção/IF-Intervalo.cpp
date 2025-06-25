/**
 * @file: IF-Intervalo.cpp
 * @author: Rodrigo Andrade
 * @date: 22 Feb 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>

using namespace std;

int main() {
  float value;
  cin >> value;

  if (value >= 0 && value <= 25) {
    cout << "Intervalo [0,25]";
  } else if (value > 25 && value <= 50) {
    cout << "Intervalo (25,50]";
  } else if (value > 50 && value <= 75) {
    cout << "Intervalo (50,75]";
  } else if (value > 75 && value <= 100) {
    cout << "Intervalo (75,100]";
  } else
    cout << "Fora de intervalo";

  return 0;
}
