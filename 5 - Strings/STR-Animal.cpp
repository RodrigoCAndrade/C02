/**
 * @file: STR-Animal.cpp
 * @author: Rodrigo Andrade
 * @date: 24 Apr 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
  string vertebrado, filo, nivel_trofico;

  getline(cin, vertebrado);
  getline(cin, filo);
  getline(cin, nivel_trofico);

  if (filo == "ave") {
    if (nivel_trofico == "carnivoro") {
      cout << "aguia" << endl;
    } else if (nivel_trofico == "onivoro") {
      cout << "pomba" << endl;
    }
  } else if (filo == "mamifero") {
    if (nivel_trofico == "onivoro") {
      cout << "homem" << endl;
    } else if (nivel_trofico == "herbivoro") {
      cout << "vaca" << endl;
    }
  } else if (filo == "inseto") {
    if (nivel_trofico == "hematofago") {
      cout << "pulga" << endl;
    } else if (nivel_trofico == "herbivoro") {
      cout << "lagarta" << endl;
    }
  } else if (filo == "anelideo") {
    if (nivel_trofico == "hematofago") {
      cout << "sanguessuga" << endl;
    } else if (nivel_trofico == "onivoro") {
      cout << "minhoca" << endl;
    }
  }

  return 0;
}
