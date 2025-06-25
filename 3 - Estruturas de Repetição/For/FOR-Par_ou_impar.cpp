/**
 * @file: FOR-Par_ou_impar.cpp
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

  for (int i = 1; i <= N; i++) {
    int X;
    cin >> X;

    if (X == 0) {
      cout << "NULL" << endl;
    } else {
      if (X % 2 == 0) {
        cout << "EVEN ";
      } else
        cout << "ODD ";

      if (X > 0) {
        cout << "POSITIVE" << endl;
      } else
        cout << "NEGATIVE" << endl;
    }
  }

  return 0;
}
