/**
 * @file: STR-Vai_Curintia.cpp
 * @author: Rodrigo Andrade
 * @date: 24 Apr 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
  // Lendo a quantidade de jogadores a serem cadastrado.
  int n_players;
  cin >> n_players;

  // Criando duas listas para armazenar as idades e os nomes dos jogadores.
  int players_ages[100];
  string players_names[100];

  // Criando duas variaveis temporaria para armazenar a leitura do nome e idade.
  string player_name;
  int player_age;

  // Criando um identificador que sera utilizado com identificacao de cada
  // jogador. A cada registro o identificador `id` incrementara em 1. -1
  // significa que ainda nao foram cadastrados jogadores.
  int id = -1;

  // Loop para cadastrar os jogadores.
  for (int i = 0; i < n_players; i++) {
    // Lendo e armazenando a idade e o nome de cada jogador nas variaveis.
    getline(cin >> ws, player_name);
    cin >> player_age;

    // Caso o jogador for maior de idade ele sera cadastrado na lista.
    if (player_age >= 18) {
      id++;
      players_ages[id] = player_age;
      players_names[id] = player_name;
    }
  }

  // Verificando se ha registros de jogadores maiores de idade.
  if (id == -1) {
    cout << "Nenhum jogador com 18 anos ou mais" << endl;
    return 0;
  }

  // Exibindo todos os jogadores maiores de idades cadastrados na lista.
  for (int j = 0; j <= id; j++) {
    cout << players_names[j] << " " << players_ages[j] << endl;
  }

  return 0;
}
