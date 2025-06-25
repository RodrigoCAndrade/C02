/**
 * @file: Q1-PROVA-FUNC.cpp
 * @author: Rodrigo Andrade
 * @date: 9 Jun 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>

using namespace std;

// Função que converte anos e meses em dias.
// @return: não há return, o número de dias é salvo na variável totalDias.
void converte(int anos, int meses, int dias, int &totalDias) {
  totalDias = (365 * anos) + (30 * meses) + dias;
}

// @return: 0 se o programa executar sem nenhum erro.
int main() {
  // Lendo anos, meses e dias e armazenando nas respectivas variáveis.
  int anos;
  int meses;
  int dias;

  cin >> anos >> meses >> dias;

  // Criando uma variável para armazenar o total de dias.
  int totalDias;
  // Chamando a função de conversão e armazenando na varariável 'totalDias'.
  converte(anos, meses, dias, totalDias);

  // Exibindo o resultado da conversão.
  cout << totalDias << endl;

  return 0;
}
