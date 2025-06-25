/**
 * @file: VET-Joaozinho_2.cpp
 * @author: Rodrigo Andrade
 * @date: 3 Apr 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iomanip>
#include <iostream>

using namespace std;

// Creating a struct to store operations
struct Operation {
  int n1;
  int n2;
  char op;
};

int main() {
  // Read the number of operations to be performed.
  int N;
  cin >> N;

  Operation operations[100];

  int n1;
  int n2;
  char op;

  for (int i = 0; i < N; i++) {
    cin >> n1;
    operations[i].n1 = n1;
  }

  for (int j = 0; j < N; j++) {
    cin >> n2;
    operations[j].n2 = n2;
  }

  for (int k = 0; k < N; k++) {
    cin >> op;
    operations[k].op = op;
  }

  // Perform the operations for each pair of numbers and display the results.
  for (int l = 0; l < N; l++) {
    Operation operation = operations[l];
    n1 = operation.n1;
    n2 = operation.n2;

    switch (operation.op) {
      case '/':
        cout << n1 << " / " << n2 << " = " << fixed << setprecision(2)
             << ((float)n1 / n2) << endl;
        break;
      case '*':
        cout << n1 << " * " << n2 << " = " << (n1 * n2) << endl;
        break;
      case '-':
        cout << n1 << " - " << n2 << " = " << (n1 - n2) << endl;
        break;
      case '+':
        cout << n1 << " + " << n2 << " = " << (n1 + n2) << endl;
        break;
      default:
        break;
    }
  }

  return 0;
}
