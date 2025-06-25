/**
 * @file: STR-Mais_uma_do_Joaozinho.cpp
 * @author: Rodrigo Andrade
 * @date: 24 Apr 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

// Criando uma funcao para calcular a media de 4 notas.
float media_aluno(float n1, float n2, float n3, float n4) {
  return (n1 + 2 * n2 + 3 * n3 + 4 * n4) / 10;
}

int main() {
  // Lendo e armazenando a quantidade de alunos.
  int n_alunos;
  cin >> n_alunos;

  // Criando dois vetores, um para armazenar o nome e outro a media de cada
  // aluno.
  string nome_alunos[100];
  float media_alunos[100];

  // Criando variaveis temporarias para leitura do nome e das notas dos alunos.
  string nome;
  float n1, n2, n3, n4;

  // Loop para ler e armazenar os nomes e as medias.
  for (int i = 0; i < n_alunos; i++) {
    // Lendo o nome do aluno.
    getline(cin >> ws, nome);

    // Lendo as notas dos alunos.
    cin >> n1 >> n2 >> n3 >> n4;

    // Armazenando o nome do aluno na posicao `i` da lista.
    nome_alunos[i] = nome;
    // Calculando a media das notas atraves da funcao `media_aluno` e
    // armazenando-a na lista `media_alunos`.
    media_alunos[i] = media_aluno(n1, n2, n3, n4);
  }

  // Exibindo o nome e a respectiva media de cada aluno.
  for (int j = 0; j < n_alunos; j++) {
    cout << nome_alunos[j] << ": " << fixed << setprecision(2)
         << media_alunos[j] << endl;
  }

  return 0;
}
