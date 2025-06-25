/**
 * @file: ARQ-Temperatura_media.cpp
 * @author: Rodrigo Andrade
 * @date: 2 Jun 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
  ifstream arqin;
  string nomearq;

  getline(cin >> ws, nomearq);

  arqin.open(nomearq.c_str(), ifstream::in);

  float sum = 0;
  int amount = 0;
  float temp;

  while (arqin >> temp) {
    sum += temp;
    amount++;
  }

  arqin.close();

  cout << "Temperatura media: " << fixed << setprecision(1)
       << ((float)sum / amount) << " graus" << endl;

  return 0;
}
