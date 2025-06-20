#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Lendo o dinheiro total e armazenando na variável 'total_dinheiro'.
    float total_dinheiro;
    cin >> total_dinheiro;

    // Lendo o valor total da compra e armazenando na variável 'total_compra'.
    float total_compra;
    cin >> total_compra;

    // Calculando o troco, e armazenando na variável 'total_troco'.
    float total_troco = total_dinheiro - total_compra;

    // Exibindo o troco a ser devolvido.
    cout << "TROCO = " << fixed << setprecision(2) << total_troco << endl;
    return 0;
}
