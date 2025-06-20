// Author: Rodrigo Andrade
// Date: 17.02.25


#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // Definindo as variáveis capital inicial, taxa de juros e tempo de aplicação.
    double initial_capital;
    double interest_rate_percent;
    int time;

    // Obtendo os valores do usuário.
    cin >> initial_capital;
    cin >> interest_rate_percent;
    cin >> time;

    // Convertendo o valor de porcentagem para real.
    double interest_rate = interest_rate_percent / 100;

    // Calculando o montante do período utilizando juros compostos.
    double total_amount = initial_capital * pow(1 + interest_rate, time);
    // Subtraíndo o valor inicial do montante para obter o lucro.
    double profit = total_amount - initial_capital;

    // Imprimindo o lucro para o usuário com duas casas decimais.
    cout << "LUCRO = " << fixed << setprecision(2) << profit;

    return 0;
}
