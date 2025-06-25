/**
 * @file: VET-La_casa_de_papel.cpp
 * @author: Rodrigo Andrade
 * @date: 2 Apr 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>

using namespace std;

int main() {
  // Reading the number of users who interacted.
  int N;
  cin >> N;

  // Creating a vector to store the feedback of each user.
  int engagements[1000];

  // Reading and storing the feedback of each user in the engagements vector.
  int user_engagement;
  for (int i = 0; i < N; i++) {
    cin >> user_engagement;
    engagements[i] = user_engagement;
  }

  // Calculating the total engagement.
  int total_engagement = 0;
  for (int j = 0; j < N; j++) {
    total_engagement += engagements[j];
  }

  // Displaying the results of the engagement survey.
  cout << ((total_engagement == 0)  ? "Deu empate"
           : (total_engagement > 0) ? "A maioria gostou"
                                    : "A maioria nao gostou")
       << endl;

  return 0;
}
