/**
 * @file: WHILE-Senha_fixa.cpp
 * @author: Rodrigo Andrade
 * @date: 20 Mar 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
  string senha;

  while (getline(cin >> ws, senha) && senha != "2002")
    cout << "Senha Invalida" << endl;

  cout << "Acesso Permitido";

  return 0;
}
