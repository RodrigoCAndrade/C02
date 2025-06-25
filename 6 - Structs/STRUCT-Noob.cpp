/**
 * @file: STRUCT-Noob.cpp
 * @author: Rodrigo Andrade
 * @date: 28 Apr 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iomanip>
#include <iostream>

using namespace std;

// Struct para armazenar os dados de um aluno.
struct student_data {
  int id;
  // Nota exam 1 e 2.
  float e1, e2, average;
};

int main() {
  // Criando o objeto student.
  student_data student;
  // Lendo o id (matrícula) e as notas, e inserindo-as na struct student.
  cin >> student.id;
  cin >> student.e1;
  cin >> student.e2;

  // Calculando a média ponderada de e1 e e2.
  student.average = (float)((student.e1 * 2) + (student.e2 * 3)) / 5;

  // Exibindo a matrícula, e a nota da primeira e segunda prova.
  cout << "Matricula do aluno: " << student.id << endl;
  cout << "Nota da primeira prova: " << fixed << setprecision(2) << student.e1
       << endl;
  cout << "Nota da segunda prova: " << fixed << setprecision(2) << student.e2
       << endl;
  cout << "Media: " << fixed << setprecision(2) << student.average << endl;

  return 0;
}
