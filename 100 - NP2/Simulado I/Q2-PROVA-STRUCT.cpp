/*
    @author: Rodrigo Andrade
    @date: 09/06/2025
    @description: This program is a test preparation from my C02 classes (PROVA - STRUCT - 2).
    @version: 1.0
    @license: MIT
    @language: C++
    @github: https://github.com/RodrigoCAndrade/C02
*/

#include <iostream>

using namespace std;

struct dados {
    string nome;
    int matricula;
};

// Função para criar o objeto aluno.
dados cadastrarAluno(string nome, int matricula) {
    dados aluno;
    aluno.nome = nome;
    aluno.matricula = matricula;

    return aluno;
}

int main() {
    // Lendo o número de alunos a serem cadastrados.
    int N;
    cin >> N;

    // Array para salvar os dados dos alunos.
    dados alunos[100];

    // Variáveis para criar um objeto aluno.
    string nome;
    int matricula;

    // Cadastrando os alunos
    for (int i = 0; i < N; i++) {
        getline(cin >> ws, nome);
        cin >> matricula;

        alunos[i] = cadastrarAluno(nome, matricula);
    }

    // Lendo o nome do aluno a ser buscado.
    string nome_busca;
    getline(cin >> ws, nome_busca);

    // Procurando o aluno na array alunos[].
    bool encontrado = false;

    for (int j = 0; j < N; j++) {
        if (alunos[j].nome == nome_busca) {
            // Exibindo a matrícula do aluno caso os termos de busca coincidam.
            cout << "Matricula: " << alunos[j].matricula << endl;
            encontrado = true;
            break;
        }
    }

    // Exibindo uma mensagem caso o aluno não for encontrado.
    if (encontrado == false)
        cout << "Aluno nao encontrado" << endl;

    return 0;
}
