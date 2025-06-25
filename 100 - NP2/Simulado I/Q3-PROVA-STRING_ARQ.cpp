/**
    @author: Rodrigo Andrade
    @date: 09/06/2025
    @description: This program is a test preparation from my C02 classes (PROVA - STRING+ARQ - 1).
    @version: 1.0
    @license: MIT
    @language: C++
    @github: https://github.com/RodrigoCAndrade/C02
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    // Lendo o nome do arquivo que contém a senha.
    string file_name;
    cin >> file_name;

    // Lendo a senha do usário.
    string password;
    getline(cin >> ws, password);

    // Abrindo o arquivo contendo as senhas.
    ifstream filein;
    filein.open(file_name.c_str(), ifstream::in);

    // Lendo as senhas do arquivo e comparando com a senha do usuário.
    // Caso elas coincidam, a variável success é alterada para true.
    string file_password;
    bool success = false;

    while(getline(filein >> ws, file_password)) {
        if (password == file_password) {
            success = true;
            break;
        }
    }

    // Fechando o arquivo.
    filein.close();

    // Exibindo a mensagem de senha correta ou incorreta.
    if (success) {
        cout << "Senha correta" << endl;
    }else
        cout << "Senha incorreta" << endl;

    return 0;
}
