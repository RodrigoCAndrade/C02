// Author: Rodrigo Andrade
// Date: 17.02.25

#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

double gaussiana(float x, float m, float s) {
    const double pi = 3.14159;

    const double fx = 1/sqrt(2*pi*pow(s, 2))*exp(-(pow(x-m, 2)/(2*pow(s, 2))));

    return fx;
}

int main() {

    // Definindo as variáveis x (ponto), m (média) e s (desvio padrão).
    float x;
    float m;
    float s;

    // Obtendo os valores do usuário.
    cin >> x;
    cin >> m;
    cin >> s;

    // Calculando a gaussiana.
    const double fx = gaussiana(x, m, s);

    // Imprimindo o resultado da gaussiana com 4 casas decimais.
    cout << fixed << setprecision(4) << fx;

    return 0;
}
