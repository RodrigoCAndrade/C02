#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int number;
  int hours;
  float salaryh;

  cin >> number >> hours >> salaryh;

  float salaryt = hours * salaryh;

  cout << "NUMBER = " << number << endl;
  cout << "SALARY = U$ " << fixed << setprecision(2) << salaryt;


  return 0;
}
