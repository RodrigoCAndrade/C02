/**
 * @file: FOR-Pares_entre_Cinco_Numeros.cpp
 * @author: Rodrigo Andrade
 * @date: 14 Apr 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>

using namespace std;

int main() {
  // Variável para armazenar a quantidade de valores pares.
  int qnt_pares = 0;
  // Variável para armazenar o valor de cada número digitado.
  int numero;

  // Loop para ler 5 números e verificar a paridade de cada um.
  for (int i = 0; i < 5; i++) {
    // Lendo um número e armazenando na variável 'numero'.
    cin >> numero;
    // Verificando se o número é par.
    if (numero % 2 == 0) {
      // Caso seja par, adicionando 1 ao número total de pares.
      qnt_pares++;
    }
  }

  // Exibindo a quantidade de números pares.
  cout << qnt_pares << " valores pares" << endl;
}
