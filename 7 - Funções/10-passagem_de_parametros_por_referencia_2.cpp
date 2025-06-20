/*
    Author: Rodrigo Andrade
    Date: 29.05.2025
    Exercise: FUN - Passagem de parâmetros por referência 2
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void converte(float F, float &C, float &K) {
    C = ((float)5/9)*(F-32); // 0
    K = C + 273;
}

int main() {
    float F;
    cin >> F;

    float C = 0;
    float K = 0;

    converte(F, C, K);

    cout << "Celsius: " << fixed << setprecision(2) << C << endl;
    cout << "Kelvin: " << fixed << setprecision(2) << K << endl;
    return 0;
}
