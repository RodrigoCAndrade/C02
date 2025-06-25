/**
 * @file: WHILE-Grenais.cpp
 * @author: Rodrigo Andrade
 * @date: 14 Apr 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>

using namespace std;

int main() {
  // Definindo a variável para parar a leitura dos números.
  // Inicialmente com valor 1 para ler os primeiros valores.
  int sair = 1;

  // Variáveis para armazenar o total de vitorias de cada time, e os empates.
  int vitorias_gremio = 0;
  int vitorias_inter = 0;
  int empates = 0;

  // Variáveis para armazenar os gols de cada time a cada grenal.
  int gols_gremio = 0;
  int gols_inter = 0;

  while (sair == 1) {
    // Lendo os gols de cada time e armazenando nas suas respectivas variáveis.
    cin >> gols_inter;
    cin >> gols_gremio;

    // Caso o inter tenha mais gols que o gremio, incrementa-se 1 vitória ao
    // Inter.
    if (gols_inter > gols_gremio) {
      vitorias_inter++;
    } else if (gols_gremio >
               gols_inter) {  // Caso o gremio tenha mais gols que o inter,
                              // incrementa-se 1 vitória ao Gremio.
      vitorias_gremio++;
    } else {
      // Caso contrário a quantidade de gols é a mesma, logo houve empate.
      empates++;  // Incrementando 1 na variável empates.
    }

    // Armazenando a opção de encerramento de leitura de grenais na variável
    // 'sair'.
    cout << "Novo grenal (1-sim 2-nao)" << endl;
    cin >> sair;
  }

  // Obtendo a quantidade de grenais, que é a soma das vitórias e empates.
  int quantidade_grenais = vitorias_gremio + vitorias_inter + empates;

  // Exibindo a quantidade de grenais, vitórias de cada time e empates.
  cout << quantidade_grenais << " grenais" << endl;
  cout << "Inter:" << vitorias_inter << endl;
  cout << "Gremio:" << vitorias_gremio << endl;
  cout << "Empates:" << empates << endl;

  // Exibindo quem venceu mais grenais, ou se não houve vencedor.
  if (vitorias_inter > vitorias_gremio) {
    cout << "Inter venceu mais" << endl;
  } else if (vitorias_gremio > vitorias_inter) {
    cout << "Gremio venceu mais" << endl;
  } else
    cout << "Nao houve vencedor" << endl;

  return 0;
}
