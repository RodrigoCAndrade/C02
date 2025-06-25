/**
 * @file: IF-Teste_de_selecao_1.cpp
 * @author: Rodrigo Andrade
 * @date: 22 Feb 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>

using namespace std;

int main() {
  int A, B, C, D;

  cin >> A >> B >> C >> D;
  if (B > C && D > A && (C + D) > (A + B) && C > 0 && D > 0 && A % 2 == 0) {
    cout << "Valores aceitos";
  } else
    cout << "Valores nao aceitos";

  return 0;
}
