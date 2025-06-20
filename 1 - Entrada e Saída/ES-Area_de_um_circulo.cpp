#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float RAIO;
  cin >> RAIO;
  float PI = 3.14159;
  float AREA = PI * pow(RAIO, 2);

  cout << "AREA = " << fixed << setprecision(3) << AREA;

  return 0;
}
