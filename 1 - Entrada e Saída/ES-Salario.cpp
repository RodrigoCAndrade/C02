/**
 * @file: ES-Salario.cpp
 * @author: Rodrigo Andrade
 * @date: 16 Feb 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int number, hours;
  float salary;

  cin >> number >> hours >> salary;

  cout << "NUMBER = " << number << endl;
  cout << "SALARY = U$ " << fixed << setprecision(2) << hours * salary;

  return 0;
}
