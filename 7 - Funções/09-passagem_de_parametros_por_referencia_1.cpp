/*
    Author: Rodrigo Andrade
    Date: 29.05.2025
    Exercise: FUN - Passagem de parâmetros por referência 1
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void media(int x, int y, float &m) {
    m = sqrt(x*y);
}

int main() {
    int x, y;
    cin >> x >> y;

    float m = 0;

    media(x, y, m);

    cout << "Media: " << fixed << setprecision(2) << m << endl;
    return 0;
}
