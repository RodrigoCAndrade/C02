/**
 * @file: IF-Lanche.cpp
 * @author: Rodrigo Andrade
 * @date: 22 Feb 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int code, amount;
  float price = 0;

  cin >> code >> amount;

  switch (code) {
    case 1:
      price = 4;
      break;
    case 2:
      price = 4.5;
      break;
    case 3:
      price = 5;
      break;
    case 4:
      price = 2;
      break;
    case 5:
      price = 1.5;
      break;
    default:
      cout << "Invalid code" << endl;
      return 1;
  }

  cout << "Total: R$ " << fixed << setprecision(2) << (price * amount);

  return 0;
}
