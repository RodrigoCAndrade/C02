/*
    Author: Rodrigo Andrade
    Date: 26.05.2025
    Exercise: FUN - O professor Assustador
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

int main() {
    int nAlunos;
    cin >> nAlunos;

    int notas[100];
    int nota;

    for (int i = 0; i < nAlunos; i++) {
        cin >> nota;
        notas[i] = nota;
    }

    cout << "Media da turma = " << fixed << setprecision(2) << media(notas, nAlunos) << endl;
    return 0;
}
