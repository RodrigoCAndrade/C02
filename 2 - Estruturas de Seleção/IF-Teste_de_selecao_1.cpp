/**
 * @file: IF-Teste_de_selecao_1.cpp
 * @author: Rodrigo Andrade
 * @date: 20 Jun 2025
 * @description: Read 4 integer values A, B, C and D. Then, if B is greater than C and D is greater than A and if the sum of C and D is greater than the sum of A and B and if C and D are positive values and if A is even, write the message "Valores aceitos". Otherwise, write the message "Valores nao aceitos".
 * @version: 1.0
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
*/

#include <iostream>

int main() {
    int A, B, C, D;

    std::cin >> A >> B >> C >> D;
    if (B > C && D > A && (C + D) > (A+B) && C > 0 && D > 0 && A % 2 == 0) {
        std::cout << "Valores aceitos";
    }else {
        std::cout << "Valores nao aceitos";
    }
    return 0;
}
