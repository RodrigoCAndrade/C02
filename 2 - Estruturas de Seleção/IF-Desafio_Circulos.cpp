/**
 * @file: IF-Desafio_Circulos.cpp
 * @author: Rodrigo Andrade
 * @date: 9 Mar 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double x1, y1, r1;
  double x2, y2, r2;

  cin >> x1 >> y1 >> r1;
  cin >> x2 >> y2 >> r2;

  double R = max(r1, r2);
  double r = min(r1, r2);

  double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

  double A = (r * r) * acos(((d * d) + (r * r) - (R * R)) / (2 * d * r)) +
             (R * R) * acos(((d * d) + (R * R) - (r * r)) / (2 * d * R)) -
             (sqrt((-d + r + R) * (d + r - R) * (d - r + R) * (d + r + R))) / 2;

  if (isnan(A)) {
    cout << "0" << endl;
    return 0;
  }

  cout << fixed << setprecision(2) << A << endl;
  return 0;
}
