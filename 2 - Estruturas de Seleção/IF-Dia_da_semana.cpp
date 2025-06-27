/**
 * @file: IF-Dia_da_semana.cpp
 * @author: Rodrigo Andrade
 * @date: 22 Feb 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <cmath>
#include <iostream>

using namespace std;

/**
  @brief: Programa que calcula o dia da semana de uma data específica
  @return: 0 se executado com sucesso
*/
int main() {
  // Variáveis para armazenar dia, mês e ano
  int d, m, a;
  cin >> d >> m >> a;

  // Se o mês for janeiro ou fevereiro, consideramos como se fosse do ano
  // anterior
  double g = a;
  if (m <= 2) g = a - 1;

  // Janeiro vira mês 13 e fevereiro vira mês 14 do ano anterior
  double f = m + 1;
  if (m <= 2) f = m + 13;

  // Fórmula principal: calcula um número baseado na data
  // 365.25 representa a duração média de um ano (incluindo anos bissextos)
  // 30.6 representa a duração média de um mês
  // 621049 é uma constante de ajuste para o algoritmo
  double n = int(365.25 * g) + int(30.6 * f) - 621049 + d;

  // Correção delta baseada em períodos do calendário
  int delta = 2;
  if (n < 36523)
    delta = 2;  // Período mais antigo
  else if (36523 <= n && n < 73048)
    delta = 1;  // Período intermediário
  else if (n >= 73048)
    delta = 0;  // Período mais recente

  // Calcula o dia da semana: aplica delta, divide por 7 e pega o resto
  // O resultado vai de 1 a 7, onde 1=domingo, 2=segunda, etc.
  int ds = (int(n) + delta) % 7 + 1;

  // Switch para converter o número do dia em texto
  // 1=domingo, 2=segunda-feira, ..., 7=sábado
  switch (ds) {
    case 1:
      cout << "domingo" << endl;
      break;
    case 2:
      cout << "segunda-feira" << endl;
      break;
    case 3:
      cout << "terca-feira" << endl;
      break;
    case 4:
      cout << "quarta-feira" << endl;
      break;
    case 5:
      cout << "quinta-feira" << endl;
      break;
    case 6:
      cout << "sexta-feira" << endl;
      break;
    case 7:
      cout << "sabado" << endl;
      break;
    default:
      break;
  }

  return 0;
}
