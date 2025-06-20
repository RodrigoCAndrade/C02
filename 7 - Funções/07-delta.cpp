/*
    Author: Rodrigo Andrade
    Date: 28.05.2025
    Exercise: FUN - Delta
*/

#include <iostream>
#include <iomanip>

using namespace std;

float calc_delta(float a, float b, float c) {
    return (b*b) - (4*a*c);
}

int main() {
    float a, b, c;
    cin >> a >> b >> c;

    cout << "delta = " << calc_delta(a, b, c) << fixed << setprecision(2) << endl;
    return 0;
}
