/*
    Author: Rodrigo Andrade
    Date: 26.05.2025
    Exercise: FUN - O professor Assustador 2
*/

#include <iostream>
#include <iomanip>

using namespace std;

float media(int notas[], int nAlunos) {
    int soma = 0;
    for (int i = 0; i < nAlunos; i++) {
        soma += notas[i];
    }

    return ((float)soma/nAlunos);
}

int nAbaixo(int notas[], int nAlunos, float media) {
    int soma = 0;
    for (int i = 0; i < nAlunos; i++)
        if (notas[i] < media) soma++;

    return soma;
}

int nAcima(int notas[], int nAlunos, float media) {
    int soma = 0;
    for (int i = 0; i < nAlunos; i++)
        if (notas[i] >= media) soma++;

    return soma;
}

int main() {
    int nAlunos;
    cin >> nAlunos;

    int notas[100];
    int nota;

    for (int i = 0; i < nAlunos; i++) {
        cin >> nota;
        notas[i] = nota;
    }

    float media_turma = media(notas, nAlunos);

    cout << "Media da turma = " << fixed << setprecision(2) << media_turma << endl;
    cout << "Alunos com nota abaixo da media: " << nAbaixo(notas, nAlunos, media_turma) << endl;
    cout << "Alunos com nota acima da media: " << nAcima(notas, nAlunos, media_turma) << endl;

    return 0;
}
