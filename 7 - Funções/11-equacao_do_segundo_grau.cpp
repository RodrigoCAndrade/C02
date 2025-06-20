/*
    Author: Rodrigo Andrade
    Date: 29.05.2025
    Exercise: FUN - Equação do segundo grau
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float calc_delta(float a, float b, float c) {
    return (b*b) - (4*a*c);
}

int calc_raizes(float a, float b, float c, float &x1, float &x2) {
    float delta = calc_delta(a, b, c);
    if (delta < 0 || a == 0)
        return 1;

    x1 = (-b-sqrt(delta))/(2*a);

    if (delta == 0)
        return 2;

    x2 = (-b+sqrt(delta))/(2*a);
    return 0;
}

int main() {
    float a, b, c;
    cin >> a >> b >> c;

    float x1, x2;

    int reais = calc_raizes(a, b, c, x1, x2);

    if (reais == 1) {
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    if (reais == 2) {
        cout << "x = " << fixed << setprecision(5) << x1 << endl;
        return 0;
    }

    cout << "x1 = " << fixed << setprecision(5) << x1 << endl;
    cout << "x2 = " << fixed << setprecision(5) << x2 << endl;
    return 0;
}
