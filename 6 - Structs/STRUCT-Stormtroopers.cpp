/**
 * @file: STRUCT-Stormtroopers.cpp
 * @author: Rodrigo Andrade
 * @date: 26 May 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iomanip>
#include <iostream>

using namespace std;

struct stormtrooper {
  int id;
  float im, fa, ga;
};

stormtrooper createStormTrooper(int id, float im, float fa) {
  stormtrooper temp_trooper;
  temp_trooper.id = id;
  temp_trooper.im = im;
  temp_trooper.fa = fa;
  temp_trooper.ga = (im + fa) / 2;
  return temp_trooper;
}

int main() {
  stormtrooper troopers[1000];

  int id = -1;
  float im, fa;
  int interator = 0;

  while (id != 0) {
    cin >> id;
    if (id == 0) break;

    cin >> im;
    cin >> fa;

    troopers[interator] = createStormTrooper(id, im, fa);
    interator++;
  }

  float max_ga = 0;
  int max_ga_position;

  for (int i = 0; i < interator; i++) {
    if (max_ga < troopers[i].ga) {
      max_ga = troopers[i].ga;
      max_ga_position = i;
    }
  }

  cout << "Stormtrooper escolhido: " << troopers[max_ga_position].id << endl;
  cout << "GA = " << fixed << setprecision(2) << troopers[max_ga_position].ga
       << endl;

  return 0;
}
