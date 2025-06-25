/**
 * @file: ES-Aplicando_no_mercado_financeiro.cpp
 * @author: Rodrigo Andrade
 * @date: 17 Feb 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  // Definindo as variáveis capital inicial, taxa de juros e tempo de aplicação.
  double capital, rate;
  int time;

  // Obtendo os valores do usuário.
  cin >> capital >> rate >> time;

  // Calculando o montante do período utilizando juros compostos.
  double amount = capital * pow(1 + (rate / 100), time);

  // Subtraíndo o valor inicial do montante para obter o lucro.
  double profit = amount - capital;

  // Imprimindo o lucro para o usuário com duas casas decimais.
  cout << "LUCRO = " << fixed << setprecision(2) << profit;

  return 0;
}
