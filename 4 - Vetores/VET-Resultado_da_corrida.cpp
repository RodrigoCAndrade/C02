/**
 * @file: VET-Resultado_da_corrida.cpp
 * @author: Rodrigo Andrade
 * @date: 4 Apr 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>

using namespace std;

struct Runner {
  int id;
  float time;
};

int main() {
  Runner runners[100];

  int id = 0;
  float time = 0;

  while (cin >> time && time != -1) {
    runners[id].id = id;
    runners[id].time = time;
    id++;
  }

  for (int i = 0; i < id; i++) {
    for (int j = i + 1; j < id; j++) {
      if (runners[i].time > runners[j].time) {
        // Trocando os corredores
        Runner runner = runners[i];
        runners[i] = runners[j];
        runners[j] = runner;
      }
    }
  }

  cout << "Classificacao:" << endl;
  for (int k = 0; k < id; k++) cout << runners[k].id << endl;

  return 0;
}
