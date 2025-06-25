/**
 * @file: PROVA-STRUCT-6.cpp
 * @author: Rodrigo Andrade
 * @date: 16 Jun 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>

using namespace std;

struct dados {
  int id;        // Identificador do entregador
  int entregas;  // Quantidade de entregas
};

/**
 * @brief: Função para gerar a struct de dados a partir de um id e de um número
 * de entregas.
 * @return: Struct dados.
 */
dados gerarDados(int id, int entregas) {
  dados dadosGerados;
  dadosGerados.id = id;
  dadosGerados.entregas = entregas;

  return dadosGerados;
}

int main() {
  // Variável para armazenar a quantidade de entregadores.
  int nEntregadores;
  cin >> nEntregadores;

  // Tratando erros: verificando se o número de entregadores é menor ou igual a
  // 0.
  if (nEntregadores <= 0) {
    cout << "Entregador com mais entregas: 0" << endl;
    cout << "Total de entregas: 0" << endl;
    return 0;
  }

  // Variáveis para construir o struct de dados.
  int id;
  int entregas;

  // Vetor para armazenar os dados dos entregadores.
  dados entregadores[100];

  // Loop para gerar a struct de dados do entregador e armazenar no índice i do
  // vetor.
  for (int i = 0; i < nEntregadores; i++) {
    cin >> id;
    cin >> entregas;

    entregadores[i] = gerarDados(id, entregas);
  }

  // Variável para armazenar o maior número de entregas.
  int maxEntregas = entregadores[0].entregas;

  // Variável para armazenar o id do entregador com maior número de entregas.
  int idEntregadorMaxEntregas = entregadores[0].id;

  // Variável para armazenar a soma de todas as entregas.
  int sumEntregas = 0;

  // Buscando o entregador com maior número de entregas, e somando as entregas
  // ao total.
  for (int j = 0; j < nEntregadores; j++) {
    if (maxEntregas < entregadores[j].entregas) {
      maxEntregas = entregadores[j].entregas;
      idEntregadorMaxEntregas = entregadores[j].id;
    }

    sumEntregas += entregadores[j].entregas;
  }

  // Exibindo o id do entregador com maior número de entregas, e o total de
  // entregas.
  cout << "Entregador com mais entregas: " << idEntregadorMaxEntregas << endl;
  cout << "Total de entregas: " << sumEntregas << endl;

  return 0;
}
