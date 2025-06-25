/**
 * @file: FOR-Fibonacci.cpp
 * @author: Rodrigo Andrade
 * @date: 13 Mar 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>

using namespace std;

int main() {
  // Tamanho da sequência
  int N;
  cin >> N;  // 0 1 1

  // Número iniciais de Fibonacci
  int n1 = 0;
  int n2 = 1;
  cout << n1 << " " << n2 << " ";

  // Lógica de Fibonacci
  for (int i = 2; i < N; i++) {
    int sum = (n1 + n2);

    n1 = n2;
    n2 = sum;

    cout << n2 << " ";
  }

  return 0;
}
