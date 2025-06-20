#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream arqin;
    string nomearq;

    getline(cin >> ws, nomearq);
    
    arqin.open(nomearq.c_str(), ifstream::in);
    
    string line;

    while(getline(arqin >> ws, line)) {
        cout << line << endl;
    }
    
    arqin.close();
    return 0;
}