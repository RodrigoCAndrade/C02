/**
 * @file: VET-Escola_Mundial.cpp
 * @author: Rodrigo Andrade
 * @date: 2 Apr 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  // Reading the number of students.
  int N;
  cin >> N;

  // Defining the vector scores to store the score of each student.
  float scores[100];

  // Reading the score of each student and storing it in the scores vector.
  float student_score;
  for (int i = 0; i < N; i++) {
    cin >> student_score;
    scores[i] = student_score;
  }

  // Calculating the average of the class.
  float sum_class_score = 0;
  for (int j = 0; j < N; j++) {
    sum_class_score += scores[j];
  }

  float average = (sum_class_score) / (N);

  // Counting the number of students above and below the class average.
  int above_average, below_average = 0;

  for (int k = 0; k < N; k++) {
    if (scores[k] >= average) {
      above_average++;
    } else {
      below_average++;
    }
  }

  // Displaying the results: class average, number of students above and below
  // the average.
  cout << "Media da turma: " << fixed << setprecision(2) << average << endl;
  cout << "Alunos com nota acima da media: " << above_average << endl;
  cout << "Alunos com nota abaixo da media: " << below_average << endl;

  return 0;
}
