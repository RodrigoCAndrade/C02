/*
    @author: Rodrigo Andrade
    @date: 09/06/2025
    @description: This program is an exercise from my C02 classes (ARQ - Escrevendo em um arquivo).
    @version: 1.0
    @license: MIT
    @language: C++
    @GitHub: https://github.com/RodrigoCAndrade
*/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

// @return: 0 if the program runs successfully
int main() {
    // Getting the file name
    string file_name;
    getline(cin, file_name);

    // Writing in the file
    ofstream file_write(file_name);
    float number;

    while (cin >> number && number != 0) {
        file_write << number << endl;
    }

    file_write.close();

    // Reading the file and printing the numbers
    ifstream file_read(file_name);
    while (file_read >> number) {
        cout << fixed << setprecision(2) << number << " ";
    }
    file_read.close();

    return 0;
}
