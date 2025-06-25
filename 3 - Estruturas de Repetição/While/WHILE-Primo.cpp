/**
 * @file: WHILE-Primo.cpp
 * @author: Rodrigo Andrade
 * @date: 20 Mar 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  if (N <= 0) {
    cout << "nao e primo" << endl;
    return 0;
  }

  // 1 não é considerado um número primo, mas...
  if (N == 1) {
    cout << "primo" << endl;
    return 0;
  }

  // Todos os pares != 2 não são primos.
  if (N % 2 == 0 && N != 2) {
    cout << "nao e primo" << endl;
    return 0;
  }
  if (N == 2) {
    cout << "primo" << endl;
    return 0;
  }

  int anterior = 3;
  // Testando divisores de 3 até sqrt(N)
  while (anterior * anterior <= N) {
    if (N % anterior == 0) {
      cout << "nao e primo" << endl;
      return 0;
    }
    anterior += 2;
  }

  cout << "primo" << endl;

  return 0;
}
