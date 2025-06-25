/**
 * @file: FUN-O_professor_Assustador.cpp
 * @author: Rodrigo Andrade
 * @date: 26 May 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iomanip>
#include <iostream>

using namespace std;

float media(int notas[], int nAlunos) {
  int soma = 0;
  for (int i = 0; i < nAlunos; i++) {
    soma += notas[i];
  }

  return ((float)soma / nAlunos);
}

int main() {
  int nAlunos;
  cin >> nAlunos;

  int notas[100];
  int nota;

  for (int i = 0; i < nAlunos; i++) {
    cin >> nota;
    notas[i] = nota;
  }

  cout << "Media da turma = " << fixed << setprecision(2)
       << media(notas, nAlunos) << endl;

  return 0;
}
