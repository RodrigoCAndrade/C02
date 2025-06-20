#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct padawan {
    string nome;
    int pontos;
};

padawan createPadawan(string nome, int pontos) {
    padawan created_padawan;
    created_padawan.nome = nome;
    created_padawan.pontos = pontos;

    return created_padawan;
}

int main() {
    int n_padawans;
    cin >> n_padawans;

    padawan padawans[1000];

    string nome;
    int pontos;

    for (int i = 0; i < n_padawans; i++) {
        getline(cin >> ws, nome);
        cin >> pontos;

        padawans[i] = createPadawan(nome, pontos);
    }

    int max_pontos = 0;
    int padawan_id;
    float total_pontos = 0;

    for (int j = 0; j < n_padawans; j++) {
        total_pontos += padawans[j].pontos;
        if (max_pontos < padawans[j].pontos) {
            max_pontos = padawans[j].pontos;
            padawan_id = j;
        }
    }

    cout << "Padawan com mais pontos: " << padawans[padawan_id].nome << endl;
    cout << "Pontos: " << padawans[padawan_id].pontos << endl;
    cout << "Media da turma: " << fixed << setprecision(2) << (total_pontos/n_padawans) << " pontos" << endl;



    return 0;
}
