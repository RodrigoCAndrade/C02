#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    ifstream arqin;
    string nomearq;

    getline(cin >> ws, nomearq);
    
    arqin.open(nomearq.c_str(), ifstream::in);
    
    float sum = 0;
    int amount = 0;
    float temp;

    while(arqin >> temp) {
        sum += temp;
        amount++;
    }
    
    arqin.close();

    cout << "Temperatura media: " << fixed << setprecision(1) << ((float)sum/amount) << " graus" << endl;
    return 0;
}