/**
 * @file: STR-Pedra_papel_tesoura.cpp
 * @author: Rodrigo Andrade
 * @date: 28 Apr 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
  // Criando e lendo uma variável para armazenar a quantidade de jogadas a serem
  // verificadas.
  int T;
  cin >> T;

  // Criando duas listas com todas as jogadas do jogador A e B.
  // Possibilidades de cada jogada: "pedra", "papel" ou "tesoura".
  string plays_a[100], plays_b[100];

  // Criando duas variáveis auxiliares para fazer a leitura das jogadas.
  string tmp_a, tmp_b;

  // Criando um loop para a leitura das jogadas do jogador A e B, e
  // armazenando-as nas suas respectivas listas.
  for (int i = 0; i < T; i++) {
    getline(cin >> ws, tmp_a);
    getline(cin >> ws, tmp_b);

    plays_a[i] = tmp_a;
    plays_b[i] = tmp_b;
  }

  // Loop que intera sobre todas as jogadas e determina um vencedor.
  for (int j = 0; j < T; j++) {
    // Lendo a jogada do jogador A e B, armazenada na posição 'j' da lista.
    tmp_a = plays_a[j];
    tmp_b = plays_b[j];

    // Todos os casos possíveis em que o jogador A é o vencedor.
    if ((tmp_a == "pedra" && tmp_b == "tesoura") ||
        (tmp_a == "tesoura" && tmp_b == "papel") ||
        (tmp_a == "papel" && tmp_b == "pedra")) {
      cout << "Jogador A" << endl;
    } else if ((tmp_b == "pedra" && tmp_a == "tesoura") ||
               (tmp_b == "tesoura" && tmp_a == "papel") ||
               (tmp_b == "papel" &&
                tmp_a == "pedra")) {  // Todos os casos em que o jogador B é o
                                      // vencedor.
      cout << "Jogador B" << endl;
    } else {  // Caso nenhuma condição anterior for satisfeita, ocorreu um
              // empate.
      cout << "Empate" << endl;
    }
  }

  return 0;
}
