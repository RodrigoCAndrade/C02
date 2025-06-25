/**
 * @file: ES-Qual_e_o_troco.cpp
 * @author: Rodrigo Andrade
 * @date: 17 Feb 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  // Lendo o dinheiro total e armazenando na variável 'total_dinheiro'.
  float dinheiro;
  cin >> dinheiro;

  // Lendo o valor total da compra e armazenando na variável 'total_compra'.
  float preco;
  cin >> preco;

  // Exibindo o troco a ser devolvido.
  cout << "TROCO = " << fixed << setprecision(2) << dinheiro - preco << endl;

  return 0;
}
