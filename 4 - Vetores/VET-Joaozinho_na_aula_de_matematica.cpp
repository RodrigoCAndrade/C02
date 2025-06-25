/**
 * @file: VET-Joaozinho_na_aula_de_matematica.cpp
 * @author: Rodrigo Andrade
 * @date: 3 Apr 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>

using namespace std;

int main() {
  // Array to store the results of the multiplication table.
  int multiplication[11];

  // Number for which the multiplication table will be generated.
  int number;
  cin >> number;

  // Calculate the multiplication results and store them in the array.
  for (int i = 0; i < 11; i++) {
    multiplication[i] = i * number;
  }

  // Display the multiplication table.
  for (int j = 0; j < 11; j++) {
    cout << number << " x " << j << " = " << multiplication[j] << endl;
  }

  return 0;
}
