/*
    Author: Rodrigo Andrade
    Date: 22.02.25
    Exercise: IF-Dia da semana
*/

// Foi utilizado a fórmula de Zeller, pois o outro estava bugado.

#include <iostream>
#include <map>
#include <string>

int main() {
  int d;
  int m;
  int a;

  std::cin >> d >> m >> a;

  if (m < 3) {
    m += 12;
    a -= 1;
  }

  int k = a % 100;
  int j = a / 100;

  int f = d + (13 * (m + 1)) / 5 + k + (k / 4) + (j / 4) - (2 * j);
  int ds = f % 7;

  ds = (ds + 7) % 7;

  std::map<int, std::string> day_names = {
      {0, "sabado"},      {1, "domingo"},      {2, "segunda-feira"},
      {3, "terca-feira"}, {4, "quarta-feira"}, {5, "quinta-feira"},
      {6, "sexta-feira"},
  };

  std::cout << day_names[ds] << std::endl;

  return 0;
}
