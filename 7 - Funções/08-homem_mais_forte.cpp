/*
    Author: Rodrigo Andrade
    Date: 28.05.2025
    Exercise: FUN - O homem mais forte do mundo
*/

#include <iostream>
#include <string>

using namespace std;

struct dados {
    string nome;
    int n1;
    int n2;
    int n3;
    int n4;
};

int strongest(dados atletas[], int nAtletas) {
    float max_pontos = 0;
    int winner_position = 0;

    for (int i = 0; i < nAtletas; i++) {
        dados atleta = atletas[i];
        float pontos = atleta.n1 + atleta.n2 + atleta.n3 + atleta.n4;

        if (pontos > max_pontos) {
            max_pontos = pontos;
            winner_position = i;
        }
    }

    return winner_position;
}

dados createCompetidor(string nome, int n1, int n2, int n3, int n4) {
    dados temp_competidor;
    temp_competidor.nome = nome;
    temp_competidor.n1 = n1;
    temp_competidor.n2 = n2;
    temp_competidor.n3 = n3;
    temp_competidor.n4 = n4;

    return temp_competidor;
}

int main() {
    int nAtletas;
    cin >> nAtletas;

    dados atletas[100];

    string nome;
    int n1, n2, n3, n4;

    for (int i = 0; i < nAtletas; i++) {
        getline(cin >> ws, nome);
        cin >> n1 >> n2 >> n3 >> n4;

        atletas[i] = createCompetidor(nome, n1, n2, n3, n4);
    }

    cout << "Vencedor: " << atletas[strongest(atletas, nAtletas)].nome << endl;
    return 0;
}
