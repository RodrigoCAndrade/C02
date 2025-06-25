/**
 * @file: STR-DDD.cpp
 * @author: Rodrigo Andrade
 * @date: 24 Apr 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
  string cidade;
  getline(cin >> ws, cidade);

  int ddd;

  if (cidade == "Brasilia")
    ddd = 61;
  else if (cidade == "Salvador")
    ddd = 71;
  else if (cidade == "Sao Paulo")
    ddd = 11;
  else if (cidade == "Rio de Janeiro")
    ddd = 21;
  else if (cidade == "Juiz de Fora")
    ddd = 32;
  else if (cidade == "Campinas")
    ddd = 19;
  else if (cidade == "Vitoria")
    ddd = 27;
  else if (cidade == "Belo horizonte")
    ddd = 31;
  else if (cidade == "Santa Rita do Sapucai")
    ddd = 35;
  else {
    cout << "DDD nao cadastrado" << endl;
    return 0;
  }

  cout << ddd << endl;

  return 0;
}
