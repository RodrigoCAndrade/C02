#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // dois tipos: arquivo texto e binario
    ifstream arqin;
    string nomearq;

    getline(cin >> ws, nomearq);
    
    arqin.open(nomearq.c_str(), ifstream::in);
    
    int idade;
    string nome;

    while(getline(arqin >> ws, nome)) {
        cout << nome << endl;

        arqin >> idade;
        cout << idade << endl;
    }
    
    arqin.close();
    return 0;
}