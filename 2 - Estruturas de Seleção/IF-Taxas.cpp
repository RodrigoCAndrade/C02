/**
 * @file: IF-Taxas.cpp
 * @author: Rodrigo Andrade
 * @date: 27 Feb 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double salary;
  cin >> salary;

  double salary_decreased = salary;

  if (salary <= 2000) {
    cout << "Isento";
    return 0;
  }

  salary_decreased -= 2000;

  if (2000 < salary && salary <= 3000) {
    cout << "R$ " << fixed << setprecision(2) << salary_decreased * 0.08;
  } else if (3000 < salary && salary <= 4500) {
    cout << "R$ " << fixed << setprecision(2)
         << 80 + (salary_decreased - 1000) * 0.18;
  } else if (4500 < salary) {
    cout << fixed << setprecision(2) << "R$ "
         << 350 + (salary_decreased - 2500) * 0.28;
  }

  return 0;
}
