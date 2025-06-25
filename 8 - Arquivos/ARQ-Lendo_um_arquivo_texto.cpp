/**
 * @file: ARQ-Lendo_um_arquivo_texto.cpp
 * @author: Rodrigo Andrade
 * @date: 12 Jun 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string file_name;
  cin >> file_name;

  ifstream file;
  file.open(file_name.c_str(), ifstream::in);

  string content;

  while (getline(file >> ws, content)) {
    cout << content << endl;
  }

  return 0;
}
