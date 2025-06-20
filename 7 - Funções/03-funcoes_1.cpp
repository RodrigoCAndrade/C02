/*
    Author: Rodrigo Andrade
    Date: 26.05.2025
    Exercise: FUN - Funções1
*/

#include <iostream>

using namespace std;

// Função que calcula a expressão: 2x^2 + 3x - 1.
int calc_a(int x) {
 return ((2*x*x) + (3*x) - 1);
}

// Função que calcula x^3.
int calc_b(int x) {
    return x*x*x;
}

// Função que calcula y^3.
int calc_c(int y) {
    return y*y*y;
}

int main() {
    // Lendo e armazenando as variáveis x e y.
    int x, y;
    cin >> x >> y;

    // Calculando os resultados através das funções e exibindo o resultado.
    cout << "a = " << calc_a(x) << endl;
    cout << "b = " << calc_b(x) << endl;
    cout << "c = " << calc_c(y) << endl;
    return 0;
}
