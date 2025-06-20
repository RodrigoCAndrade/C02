#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // dois tipos: arquivo texto e binario
    ofstream arqout;
    string nomearq;

    nomearq = "dados.txt";
    
    arqout.open(nomearq.c_str(), ofstream::out);
    
    arqout << "Inatel" << endl;
    arqout << 3.14 << endl;

    arqout.close();
    return 0;
}