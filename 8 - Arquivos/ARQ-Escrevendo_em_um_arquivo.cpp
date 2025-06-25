/**
 * @file: ARQ-Escrevendo_em_um_arquivo.cpp
 * @author: Rodrigo Andrade
 * @date: 9 Jun 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

/**
 * @return: 0 if the program runs successfully
 */
int main() {
  // Getting the file name
  string file_name;
  getline(cin, file_name);

  // Writing in the file
  ofstream file_write(file_name);
  float number;

  while (cin >> number && number != 0) {
    file_write << number << endl;
  }

  file_write.close();

  // Reading the file and printing the numbers
  ifstream file_read(file_name);
  while (file_read >> number) {
    cout << fixed << setprecision(2) << number << " ";
  }
  file_read.close();

  return 0;
}
