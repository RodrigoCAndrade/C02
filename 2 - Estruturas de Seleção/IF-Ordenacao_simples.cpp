/**
 * @file: IF-Ordenacao_simples.cpp
 * @author: Rodrigo Andrade
 * @date: 22 Feb 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>

int main() {
  // Lê e armazena n1, n2 e n3.
  int n1, n2, n3;
  std::cin >> n1 >> n2 >> n3;

  // Ordena n1, n2, n3 do maior para o menor usando swap e ifs.
  if (n1 > n2) std::swap(n1, n2);
  if (n1 > n3) std::swap(n1, n3);
  if (n2 > n3) std::swap(n2, n3);

  // Exibe o resultado.
  std::cout << std::endl
            << n1 << std::endl
            << n2 << std::endl
            << n3 << std::endl;

  return 0;
}
