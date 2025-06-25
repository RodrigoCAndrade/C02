/**
 * @file: STR-Ordem_alfabetica.cpp
 * @author: Rodrigo Andrade
 * @date: 28 Apr 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>

using namespace std;

// Para fazer a ordenação escolheu-se o Algoritmo Bubble Sort, onde no pior caso
// há O(n^2) interações; e no melhor caso, onde a lista está completamente
// ordenada, O(n) interações. Nesse caso n = 3.
int main() {
  // Declarando uma lista que armazenará as três palavras.
  string words[3];
  // Variável auxiliar para leitura das palavras.
  string aux_word;

  // Loop para leitura das palavras e armazenamento na lista.
  for (int i = 0; i < 3; i++) {
    getline(cin >> ws, aux_word);
    words[i] = aux_word;
  }

  // Boolean para armazenar se houve alguma troca.
  bool troca;

  // For com -1 para não ultrapassar o tamanho da array.
  for (int j = 0; j < 3 - 1; j++) {
    // Redefinindo o valor de troca.
    troca = false;
    // -j para ignorar o final já ordenado.
    for (int z = 0; z < 3 - j - 1; z++) {
      // Realizando a troca
      if (words[z] > words[z + 1]) {
        string tmp = words[z];
        words[z] = words[z + 1];
        words[z + 1] = tmp;
        troca = true;
      }
    }

    // Caso em alguma interação do loop não ocorra nenhuma troca, a lista já
    // está completamente ordenada.
    if (!troca) {
      break;
    }
  }

  // Exibindo a lista ordenada.
  for (int k = 0; k < 3; k++) {
    if (k == 2) {
      cout << words[k];
    } else
      cout << words[k] << " ";
  }

  return 0;
}
