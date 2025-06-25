/**
 * @file: VET-Pesquisa.cpp
 * @author: Rodrigo Andrade
 * @date: 3 Apr 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>

using namespace std;

int main() {
  // Creating an array of 100 numbers.
  int numbers[100];

  // Storing each number in the array until the input is 0, not including 0.
  int number = -1;
  int interator = 0;
  while (number != 0) {
    cin >> number;
    if (number == 0) break;  // Important!
    numbers[interator] = number;

    interator++;
  }

  // Getting the number to be searched in the numbers array.
  int number_search;
  cin >> number_search;

  // Searching for the number in the numbers array.
  // * Dúvida: Posso usar return 0; para quebrar o loop se ele encontrar o
  // número na array?
  for (int i = 0; i < interator; i++) {
    if (numbers[i] == number_search) {
      cout << "Elemento " << number_search << " encontrado na posicao " << i
           << endl;
      return 0;
    }
  }

  // If the number is not found in the array, display a message.
  cout << "Elemento " << number_search << " nao foi encontrado" << endl;

  return 0;
}
