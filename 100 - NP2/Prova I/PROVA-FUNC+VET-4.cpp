/**
 * @file: PROVA-FUNC+VET-4.cpp
 * @author: Rodrigo Andrade
 * @date: 16 Jun 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>

using namespace std;

/**
 * @brief: Função para calcular o número de faltas de um aluno.
 * @params: Array com as presenças ou faltas, e inteiro com o número de dias.
 * @return: Número de faltas do aluno (int).
 */
int faltas(int dias[], int N) {
  int sumFaltas = 0;

  for (int i = 0; i < N; i++) {
    if (dias[i] == 0) sumFaltas++;
  }

  return sumFaltas;
}

int main() {
  // Variável para armazenar o número de dias.
  int dias;
  cin >> dias;

  // Vetor para armazenar as presenças ou faltas de um aluno.
  int faltasData[100];

  // Variável para armazenar a presença (1) ou falta (0) em um dia.
  int faltou;

  // Loop que lê a falta em N dias, e armazena a presença ou falta no vetor
  // faltasData.
  for (int i = 0; i < dias; i++) {
    cin >> faltou;
    faltasData[i] = faltou;
  }

  // Exibindo o número de faltas.
  cout << "Número de faltas: " << faltas(faltasData, dias) << endl;

  return 0;
}
