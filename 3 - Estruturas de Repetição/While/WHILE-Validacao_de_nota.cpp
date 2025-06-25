/**
 * @file: WHILE-Validacao_de_nota.cpp
 * @author: Rodrigo Andrade
 * @date: 20 Mar 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  float nota1, nota2;

  do {
    if (nota1 < 0 || nota1 > 10) cout << "nota invalida" << endl;
    cin >> nota1;
  } while (nota1 < 0 || nota1 > 10);

  do {
    if (nota2 < 0 || nota2 > 10) cout << "nota invalida" << endl;
    cin >> nota2;
  } while (nota2 < 0 || nota2 > 10);

  cout << "media = " << fixed << setprecision(2) << ((nota1 + nota2) / 2);
}
