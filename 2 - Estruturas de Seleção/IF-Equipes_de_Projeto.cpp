/**
 * @file: IF-Equipes_de_Projeto.cpp
 * @author: Rodrigo Andrade
 * @date: 27 Feb 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  if (N < 3) {
    cout << "0" << endl;
  } else
    cout << floor(N / 3) << endl;

  return 0;
}
