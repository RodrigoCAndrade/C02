/**
 * @file: STRUCT-Jedi.cpp
 * @author: Rodrigo Andrade
 * @date: 26 Apr 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>
#include <string>

using namespace std;

struct cavaleiro {
  string nome;
  int base;
};

cavaleiro createCavaleiro(string nome, int base) {
  cavaleiro created_cavaleiro;
  created_cavaleiro.nome = nome;
  created_cavaleiro.base = base;

  return created_cavaleiro;
}

int getBase(string nome, int n_cavaleiros, cavaleiro cavaleiros[1000]) {
  for (int i = 0; i < n_cavaleiros; i++) {
    if (cavaleiros[i].nome == nome) return cavaleiros[i].base;
  }

  return -1;
}

int main() {
  int n_cavaleiros;
  cin >> n_cavaleiros;

  cavaleiro cavaleiros[1000];

  string nome;
  int base;

  for (int i = 0; i < n_cavaleiros; i++) {
    getline(cin >> ws, nome);
    cin >> base;

    cavaleiros[i] = createCavaleiro(nome, base);
  }

  string busca;
  getline(cin >> ws, busca);

  int resultado_base = getBase(busca, n_cavaleiros, cavaleiros);
  if (resultado_base == -1) {
    cout << "Este cavaleiro nao esta cadastrado" << endl;
  } else {
    cout << "Este cavaleiro esta na base " << resultado_base << endl;
  }

  return 0;
}
