/**
 * @file: WHILE-Varias_notas_com_validacao.cpp
 * @author: Rodrigo Andrade
 * @date: 24 Mar 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int codigo = 1;

  float nota1, nota2;

  while (codigo == 1) {
    cin >> nota1;
    while (nota1 < 0 || nota1 > 10) {
      cout << "nota invalida" << endl;
      cin >> nota1;
    }

    cin >> nota2;
    while (nota2 < 0 || nota2 > 10) {
      cout << "nota invalida" << endl;
      cin >> nota2;
    }

    cout << "media = " << fixed << setprecision(2) << ((nota1 + nota2) / 2)
         << endl;

    cout << "novo calculo (1-sim 2-nao)" << endl;
    cin >> codigo;

    while (codigo != 1 && codigo != 2) {
      cout << "novo calculo (1-sim 2-nao)" << endl;
      cin >> codigo;
    }
  }

  return 0;
}
